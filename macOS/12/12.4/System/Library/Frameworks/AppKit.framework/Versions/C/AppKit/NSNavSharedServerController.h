@class NSTextField, NSString, NSImage, NSStackView, NSButton;

@interface NSNavSharedServerController : NSViewController {
    NSButton *_connectAsButton;
    NSButton *_shareScreenButton;
    NSTextField *_serverNameTextField;
    NSTextField *_connectingTextField;
    unsigned char _watchingFrameChanges : 1;
    unsigned int _reserved2 : 31;
}

@property (weak) NSStackView *controlsStack;
@property (copy) NSString *serverName;
@property (retain) NSImage *serverIcon;
@property (copy) NSString *statusText;
@property BOOL isBannerView;
@property (getter=isRemoteDisc) BOOL remoteDisc;
@property (getter=isUsingDisc) BOOL usingDisc;
@property (getter=isWaitingForDisc) BOOL waitingForDisc;
@property (readonly) NSButton *connectAsButton;
@property (readonly) NSButton *shareScreenButton;
@property (copy) NSString *userName;
@property int connectionState;

- (void)dealloc;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)connectAsButton;
- (void)updateButtonVisibilityState;
- (void)updateStatus;
- (id)initAsSharedServerView;
- (id)initAsSharedServerBannerView;
- (id)shareScreenButton;
- (void)_frameChangedOnText:(id)a0;
- (void)awakeFromNib;
- (void)updateStatusTextForConnectionState:(int)a0 userName:(id)a1;
- (void)updateConnectAsButtonForConnectionState:(int)a0;

@end
