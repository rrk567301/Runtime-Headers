@class NSMutableArray, NSWindow, NSRemoteView;
@protocol NSContextMenuServerProtocol, NSMenuRemoteViewDelegate;

@interface NSMenuRemoteView : NSRootMenuWindowBackgroundView <NSRemoteViewDelegate> {
    NSRemoteView *_remoteView;
    BOOL _isRunning;
    BOOL _isValid;
    NSMutableArray *_readySemaphores;
}

@property (weak) NSWindow *hostWindow;
@property (weak) id<NSMenuRemoteViewDelegate> delegate;
@property (readonly, weak) id<NSContextMenuServerProtocol> serviceProxy;
@property (readonly) NSRemoteView *remoteView;
@property (readonly) BOOL isRunning;
@property (readonly) BOOL isValid;
@property (readonly) BOOL shouldRetainExportedObject;

+ (void)warmUp;
+ (id)remoteServiceViewControllerClassName;

- (id)exportedInterface;
- (id)exportedObject;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_initiateConnection;
- (void)_signalWaiters;
- (void)didAdvanceToConfigPhase;
- (void)didAdvanceToRunPhase;
- (id)initWithHostWindow:(id)a0;
- (void)serviceDidInvalidate;
- (id)serviceViewControllerInterface;
- (void)viewDidInvalidate:(id)a0;
- (void)waitUntilRunning;

@end
