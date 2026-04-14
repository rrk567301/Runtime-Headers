@class NSString, NSThread, NSMutableDictionary, NSDictionary, ASDTCondition, NSObject, NSMutableSet, ASDPlugin;
@protocol OS_dispatch_queue, ASDTDeviceManagerDelegate;

@interface ASDTDeviceManager : ASDTDeviceList <ASDTSystemPowerNotifierDelegate>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *configuration;
@property (weak, nonatomic) id<ASDTDeviceManagerDelegate> delegate;
@property (weak, nonatomic) ASDPlugin *plugin;
@property (nonatomic) BOOL devicesConfigured;
@property (nonatomic) unsigned int numDevicesToInitialize;
@property (retain, nonatomic) NSMutableDictionary *deviceInitStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initializingQueue;
@property (retain, nonatomic) ASDTCondition *initializingCond;
@property (retain, nonatomic) NSThread *thread;
@property (retain, nonatomic) ASDTCondition *threadCond;
@property (nonatomic) BOOL threadWorkToDo;
@property (nonatomic) BOOL threadStarted;
@property (retain, nonatomic) NSMutableSet *devicesRunning;
@property (nonatomic) double runningLogPeriod;
@property (nonatomic) BOOL verboseDeviceLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceManagerWithConfig:(id)a0 withDelegate:(id)a1;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)systemWillSleep;
- (void)removeAudioDevice:(id)a0;
- (void)systemHasPoweredOn;
- (BOOL)addAudioDeviceWithCheck:(id)a0;
- (BOOL)addDevicesFromConfiguration;
- (BOOL)allowSystemSleep;
- (void)configureDevices;
- (void)deviceConfigurationFailed:(id)a0;
- (void)deviceInitializationFailed:(id)a0;
- (void)deviceInitialized:(id)a0 withStatus:(int)a1;
- (int)doInitializeDevice:(id)a0;
- (id)initWithConfig:(id)a0 withDelegate:(id)a1;
- (void)initializeDevice:(id)a0;
- (void)lockedSignalThread;
- (void)logStatsForDevice:(id)a0 withPowerState:(int)a1;
- (void)powerStateChangedForDevice:(id)a0 toState:(int)a1;
- (void)publishDevice:(id)a0;
- (void)threadLoop:(id)a0;
- (void)waitForInitialization;
- (void)waitForInitializationWithTimeoutUs:(unsigned int)a0;
- (void)waitForThreadStart;

@end
