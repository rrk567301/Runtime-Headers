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
- (id)initWithDelegate:(id)a0;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)_handleF5Reset;
- (void)_handleRestoreDone;
- (void)springboardStartMonitor:(id)a0 didReceiveStarted:(BOOL)a1;
- (void).cxx_destruct;
- (id)liveDarwinNotifications;
- (void)_verifyRestoreDone;
- (BOOL)checkSystemReady;
- (BOOL)_checkIfRestoreDone;

@end
