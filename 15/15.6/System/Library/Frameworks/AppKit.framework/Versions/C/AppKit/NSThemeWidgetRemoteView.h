@class NSMutableDictionary, NSRemoteView, NSMutableArray, NSWindow;
@protocol NSThemeWidgetRemoteViewDelegate;

@interface NSThemeWidgetRemoteView : NSView <NSRemoteViewDelegate, WindowSharingRemoteViewHostProtocol> {
    NSRemoteView *_remoteView;
    NSMutableDictionary *_uuidToMenuItems;
    char _hasAdvancedToConfigPhase;
    char _running;
    NSMutableArray *_readySemaphores;
}

@property (weak) NSWindow *sharedWindow;
@property (weak) id<NSThemeWidgetRemoteViewDelegate> delegate;
@property (readonly) NSRemoteView *remoteView;
@property (readonly) char hasAdvancedToConfigPhase;
@property (readonly) char running;
@property (readonly) char valid;
@property (readonly) char shouldRetainExportedObject;

+ (id)remoteServiceViewControllerClassName;
+ (void)warmup;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)exportedInterface;
- (void)_initiateConnection;
- (void)_signalWaiters;
- (id)dehydrateMenuItems:(id)a0;
- (void)didAdvanceToConfigPhase;
- (void)didAdvanceToRunPhase;
- (id)initWithSharedWindow:(id)a0;
- (void)serviceDidInvalidate;
- (void)serviceSelectedMenuItemWithUUID:(id)a0;
- (id)serviceViewControllerInterface;
- (void)viewDidInvalidate:(id)a0;
- (void)waitUntilRunning;

@end
