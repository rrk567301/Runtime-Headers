@class NSImageView, NSTextField, NSStackView, NSButton;

@interface PrivacyProxyStatusSection : BackgroundColorView

@property (retain, nonatomic) NSStackView *privacyProxyStatusView;
@property (retain, nonatomic) NSStackView *privacyProxyStatusBody;
@property (retain, nonatomic) NSTextField *privacyProxyHeading;
@property (retain, nonatomic) NSTextField *privacyProxyDescription;
@property (retain, nonatomic) NSImageView *privacyProxyIcon;
@property (retain, nonatomic) NSButton *privacyProxyAction;

- (void).cxx_destruct;
- (void)_initSubviews;
- (id)init;
- (void)_attachSubviews;
- (void)_configurePrivacyProxySectionSubview:(id)a0;
- (void)_hideIcon;
- (void)_showIcon;

@end
