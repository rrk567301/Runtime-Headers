@class NSString;
@protocol MTSystemStateDelegate, MTScheduler;

@interface MTSystemStateListener : NSObject <MTSpringboardStartMonitorObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate>

@property (weak, nonatomic) id<MTSystemStateDelegate> delegate;
@property (nonatomic) BOOL restoreDoneHandled;
@property (retain, nonatomic) id<MTScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSystemRestoreDone;
+ (id)_restoreNotification;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (id)liveDarwinNotifications;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)springboardStartMonitor:(id)a0 didReceiveStarted:(BOOL)a1;
- (BOOL)checkSystemReady;
- (BOOL)_checkIfRestoreDone;
- (void)_verifyRestoreDone;
- (void)_handleRestoreDone;
- (void)_handleF5Reset;

@end
