@class NSImageView, NSTextField, PKMobileAssetManager, NSButton;
@protocol PKUserNotificationAuthorizationExplanationViewControllerDelegate;

@interface PKUserNotificationAuthorizationExplanationViewController : NSViewController {
    unsigned long long _contentType;
    PKMobileAssetManager *_assetManager;
}

@property (weak) NSImageView *imageView;
@property (weak) NSTextField *titleLabel;
@property (weak) NSTextField *bodyLabel;
@property (weak) NSButton *enableButton;
@property (weak) NSButton *notNowButton;
@property (weak, nonatomic) id<PKUserNotificationAuthorizationExplanationViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithContentType:(unsigned long long)a0;
- (id)_titleText;
- (BOOL)_isDarkMode;
- (id)_bodyText;
- (id)_localizedDynamicString:(id)a0;
- (id)_enableButtonText;
- (id)_notNowButtonText;
- (id)_heroImage;
- (id)_heroImageIdentifier;
- (void)_disableButtons;
- (void)enableNotificationsTapped:(id)a0;
- (void)notNowTapped:(id)a0;

@end
