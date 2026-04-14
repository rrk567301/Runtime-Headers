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
- (void)close;
- (void).cxx_destruct;
- (void)hostFullScreenStatusDidChange;
- (void)hostButtonRevealAmountDidChange;
- (void)windowDidLoad;
- (void)transferToHostWindow:(id)a0;
- (void)remoteServiceDidInvalidate:(id)a0;
- (id)menuItemsForWindowSharingRemoteButton:(id)a0;
- (id)initWithHostWindow:(id)a0;

@end
