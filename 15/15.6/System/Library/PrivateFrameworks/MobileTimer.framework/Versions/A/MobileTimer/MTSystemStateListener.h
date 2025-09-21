@class NSString;
@protocol MTSystemStateDelegate, MTScheduler;

@interface MTSystemStateListener : NSObject <MTSpringboardStartMonitorObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate>

@property (weak, nonatomic) id<MTSystemStateDelegate> delegate;
@property (nonatomic) char restoreDoneHandled;
@property (retain, nonatomic) id<MTScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_restoreNotification;
+ (char)isSystemRestoreDone;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (char)_checkIfRestoreDone;
- (void)_handleF5Reset;
- (void)_handleRestoreDone;
- (void)_verifyRestoreDone;
- (char)checkSystemReady;
- (id)gatherDiagnostics;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (char)handlesNotification:(id)a0 ofType:(long long)a1;
- (id)liveDarwinNotifications;
- (void)printDiagnostics;
- (void)springboardStartMonitor:(id)a0 didReceiveStarted:(char)a1;

@end
