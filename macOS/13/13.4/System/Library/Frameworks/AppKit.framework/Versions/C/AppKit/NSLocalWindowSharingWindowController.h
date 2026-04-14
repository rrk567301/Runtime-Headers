@class NSString, NSWindow, NSWindowSharingRemoteButton;

@interface NSLocalWindowSharingWindowController : NSWindowController <NSWindowSharingRemoteButtonDelegate> {
    NSWindowSharingRemoteButton *_widget;
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
- (void)hostFullScreenStatusDidChange;
- (id)initWithHostWindow:(id)a0;
- (id)menuItemsForWindowSharingRemoteButton:(id)a0;
- (void)remoteServiceDidInvalidate:(id)a0;
- (void)transferToHostWindow:(id)a0;
- (void)windowDidLoad;

@end
