# SmartCamera_MacOS
������ Linux ƽ̨����������ͷ SDK��֧�� SmartLink �������������������֣�������ͷ���������á�����Ƶ�������ã��Լ� RTMP �������õȡ�

SmartCamera ּ���ṩ�����õ� SDK�����ݰ�������������ͷ���������ͷ�ȸ�������ͷ�豸��ʵ�ֶ�����ͷ��������õ����ܻ����ƶ�����

## ��ʶ SmartCamera
- SDK ����ṹ��
![Overview](overview.png)
- SmartCamera��SmartCamera ��һ������ʵ������ʹ�� SDK �������
- CameraProvider��CameraProvider ��һ���ӿڣ���Բ�ͬ���̵�����ͷ���ṩ��ͬ�� CameraProvider ʵ��
- Camera��Camera ͬ����һ���ӿڣ���Բ�ͬ�����ṩ��Ӧ��ʵ��

## ʹ�� SmartCamera
- ���� include �� lib �ļ��У������뵽���̡�
- �������룺
```c++
SmartCamera*	g = SmartCamera_getInstance();
ArrayList<CameraProvider*>*	providers = g->getSupported();
		
g->discover(providers, this, 5);

providers->destroy();


virtual void cameraDiscoverAbort(CameraProviderSource* source)
{
    std::cout << "ABORT: " << source->getName() << "\n";
}

virtual void cameraDiscoverTimeout(CameraProviderSource* source)
{
    std::cout << "TIMEOUT: " << source->getName() << "\n";
}

virtual void cameraDiscovered(CameraSource* source)
{
    std::cout << "FOUND: " << source->getUrl() << "\n";
    
    SmartCamera*	g = SmartCamera_getInstance();
    Camera*		camera = g->connect(source->getUrl());
    
    if(camera)
    {
        const NETWORK_CONFIG*	network = camera->getNetwork();

        if(network)
            std::cout << "DHCP: " << (network->dhcp ? "YES" : "NO") << ", "
                    << "IP: " << network->ip << ", "
                    << "MASK: " << network->mask << ", "
                    << "GATEWAY: " << network->gateway << ", "
                    << "DNS1: " << network->dns1 << ", "
                    << "DNS2: " << network->dns2 << "\n";

        ....
    }
}
```


## ���������
���������κ�����ʱ������ͨ���� GitHub �� repo �ύ issues ���������⣬�뾡���ܵ�����������������⣬����д�����ϢҲһͬ������������ Labels ��ָ������Ϊ bug ����������
[ͨ������鿴���е� issues ���ύ Bug](https://github.com/azhisoft/SmartCamera_MacOS/issues)
