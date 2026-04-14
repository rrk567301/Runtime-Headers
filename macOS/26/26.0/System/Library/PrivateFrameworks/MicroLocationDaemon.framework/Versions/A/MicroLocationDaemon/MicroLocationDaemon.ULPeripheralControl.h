@class OS_dispatch_queue, ULDarwinNotificationHelper, NSError;
@protocol _TtP19MicroLocationDaemon25ULConclaveManagerProtocol_;

@interface MicroLocationDaemon.ULPeripheralControl : NSObject <MicroLocationDaemon.ULExclaveManagement> {
    void /* unknown type, empty encoding */ polarisManager;
}

@property (nonatomic, readonly) OS_dispatch_queue *queue;
@property (nonatomic, readonly) ULDarwinNotificationHelper *darwinNotificationHelper;
@property (nonatomic, readonly) id<_TtP19MicroLocationDaemon25ULConclaveManagerProtocol_> conclaveManager;
@property (nonatomic, weak) void /* function */ relativePoseHandler;
@property (nonatomic, weak) void /* function */ delegate;

- (void)load;
- (id)init;
- (void).cxx_destruct;
- (void)unloadKeyFrames;
- (BOOL)_getPoseEstimationAndReturnError:(id *)a0;
- (void)_registerForDescriptorsReceivedNotification;
- (void)_unregisterDescriptorsReceivedNotification;
- (void)dropWithIdentifiers:(id)a0;
- (id)getPoseEstimation;
- (id)initWithQueue:(id)a0 delegate:(id)a1 darwinNotificationHelper:(id)a2 conclaveManager:(id)a3 fullWakeConclaveModeEnabled:(BOOL)a4;
- (void)loadKeyFramesFor:(id)a0;
- (void)saveWithIdentifiers:(id)a0;
- (void)setDependenciesWithRelativePoseHandler:(id)a0;
- (void)setupPolarisGraphsWithCompletionHandler:(void (^)(NSError *))a0;
- (BOOL)teardownPolarisGraphsAndReturnError:(id *)a0;
- (void)updateWithDatabaseUpdateRequest:(id)a0;

@end
