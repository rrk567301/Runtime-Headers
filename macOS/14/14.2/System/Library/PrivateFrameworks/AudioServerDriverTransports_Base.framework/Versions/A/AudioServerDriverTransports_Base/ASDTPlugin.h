@class ASDTDeviceList, NSArray, ASDTDeviceManager, NSDictionary, NSString, NSObject, ASDTSystemPowerNotifier;
@protocol OS_dispatch_queue;

@interface ASDTPlugin : ASDPlugin <ASDTDeviceManagerDelegate, ASDTSystemPowerNotifierDelegate, ASDTSystemPowerStatus> {
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _configChangeNumber;
}

@property (retain, nonatomic) ASDTDeviceManager *deviceManager;
@property (retain, nonatomic) ASDTSystemPowerNotifier *systemPowerNotifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property BOOL initializationComplete;
@property (retain, nonatomic) ASDTDeviceList *publishedDevices;
@property (readonly, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSArray *audioDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL systemIsSleeping;

- (id)init;
- (void).cxx_destruct;
- (void)systemWillSleep;
- (BOOL)systemIsSleeping;
- (void)addAudioDevice:(id)a0;
- (void)removeAudioDevice:(id)a0;
- (void)systemHasPoweredOn;
- (void)addAudioDevices:(id)a0;
- (void)halInitializeWithPluginHost:(struct AudioServerPlugInHostInterface { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a0;
- (void)removeAudioDevices:(id)a0;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)allowSystemSleep;
- (void)executeConfigurationChange:(unsigned int)a0 forDeviceWithName:(id)a1 withBlock:(id /* block */)a2;

@end
