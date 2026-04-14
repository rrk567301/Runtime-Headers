@class NSWindow, NSMutableDictionary, NSRemoteView;
@protocol NSWindowSharingRemoteButtonDelegate;

@interface NSWindowSharingRemoteButton : NSView <NSRemoteViewDelegate, WindowSharingControlHostProtocol> {
    NSRemoteView *_remoteView;
    NSMutableDictionary *_uuidToMenuItems;
    NSWindow *_hostWindow;
}

@property (weak) id<NSWindowSharingRemoteButtonDelegate> delegate;
@property (readonly) BOOL shouldRetainExportedObject;

+ (void)warmup;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)_initiateConnection;
- (void)_updateAcceptsHover;
- (void)transferToHostWindow:(id)a0;
- (id)serviceViewControllerInterface;
- (void)viewDidInvalidate:(id)a0;
- (void)windowMenuItemsForServiceWithReplyHandler:(id /* block */)a0;
- (void)serviceSelectedMenuItemWithUUID:(id)a0;
- (id)windowMenuItemsForService;
- (id)initWithHostWindow:(id)a0;
- (id)remoteView;

@end
