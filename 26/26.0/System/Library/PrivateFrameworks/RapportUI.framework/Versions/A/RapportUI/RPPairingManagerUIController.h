@class NSXPCConnection, NSString, NSWindowController, RPPairingManagerViewController, NSStoryboard, NSViewController, NSWindow, NSObject;
@protocol OS_dispatch_queue;

@interface RPPairingManagerUIController : NSObject <RPUIAgentXPCClientInterface> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    RPPairingManagerViewController *_vcMain;
    NSWindowController *_wc;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSStoryboard *mainStoryboard;
@property (nonatomic) BOOL allowManualIP;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSViewController *presentingViewController;
@property (nonatomic) BOOL runInProcess;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSWindow *window;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)_cleanup;
- (void)_interrupted;
- (void)invalidate;
- (void)_invalidated;
- (id)init;
- (void)activate;
- (void)dismiss;
- (void).cxx_destruct;
- (void)pairingManagerUIInvalidated;
- (void)_activateInProcess;
- (void)_activateXPC;
- (void)uiDismissed;

@end
