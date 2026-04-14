@class NSString, NSWindow, NSThemeWidgetSharedWindowRemoteButton;

@interface NSLocalWindowSharingWindowController : NSWindowController <NSThemeWidgetSharedWindowRemoteButtonDelegate> {
    NSThemeWidgetSharedWindowRemoteButton *_widget;
}

@property (readonly, weak) NSWindow *hostWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)hostButtonRevealAmountDidChange;
- (void)endSharingForWindow;
- (void)hostFullScreenStatusDidChange;
- (id)initWithHostWindow:(id)a0;
- (id)menuItemsForWindowSharingSharedWindowRemoteButton:(id)a0;
- (void)remoteServiceDidInvalidate:(id)a0;
- (void)transferStreamToWindow:(id)a0;
- (void)windowDidLoad;

@end
