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
- (void).cxx_destruct;
- (void)invalidate;
- (id)exportedInterface;
- (void)_initiateConnection;
- (void)_updateAcceptsHover;
- (id)initWithHostWindow:(id)a0;
- (id)remoteView;
- (void)serviceSelectedMenuItemWithUUID:(id)a0;
- (id)serviceViewControllerInterface;
- (void)transferToHostWindow:(id)a0;
- (void)viewDidInvalidate:(id)a0;
- (id)windowMenuItemsForService;
- (void)windowMenuItemsForServiceWithReplyHandler:(id /* block */)a0;

@end
