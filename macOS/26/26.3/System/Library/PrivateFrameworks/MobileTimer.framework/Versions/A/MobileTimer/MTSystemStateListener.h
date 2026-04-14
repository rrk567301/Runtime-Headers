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

- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (void)_verifyRestoreDone;
- (void)springboardStartMonitor:(id)a0 didReceiveStarted:(BOOL)a1;
- (id)initWithDelegate:(id)a0;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (id)liveDarwinNotifications;
- (void)_handleF5Reset;
- (void).cxx_destruct;
- (BOOL)_checkIfRestoreDone;
- (BOOL)checkSystemReady;
- (void)_handleRestoreDone;

@end
