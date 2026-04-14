@class CBPILNode, NSString, CBALSServiceClient, PILAutoBrightnessModule, NSMutableArray, PILStateMonitor;

@interface PILContainer : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol> {
    NSMutableArray *_relevantServices;
    NSMutableArray *_modules;
    CBPILNode *_node;
    CBALSServiceClient *_alsServiceClient;
    PILStateMonitor *_pilStateMonitor;
    PILAutoBrightnessModule *_cilBrightnessModule;
    PILAutoBrightnessModule *_milBrightnessModule;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPropertyForKey:(id)a0;
- (BOOL)start;
- (void)dealloc;
- (void)stop;
- (id)copyPropertyInternalForKey:(id)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyIdentifiers;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)tearDownModules;
- (void)handleEnablementStateChangeForKeyPath:(id)a0 andState:(BOOL)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1 from:(id)a2;
- (id)initWithPILNode:(id)a0;
- (id)newStatusInfo;
- (void)registerForPILNotifications;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (void)setupALSServices;
- (void)setupModules;
- (void)unregisterForPILNotifications;
- (void)updateBrightness;

@end
