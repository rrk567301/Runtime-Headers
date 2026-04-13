@class OBTemplateContainerViewController, NSString, OBPrivacySplashView, OBPrivacyFlow;

@interface OBPrivacySplashController : NSWindowController <OBPrivacyPresenting> {
    OBPrivacyFlow *_flow;
    OBPrivacySplashView *splashView;
}

@property (retain) OBTemplateContainerViewController *containerViewController;
@property BOOL suppressPerPageAnalyticsLogging;
@property BOOL allowsOpeningSafari;
@property (nonatomic) BOOL showLinkToPrivacyGateway;
@property BOOL showsLinkToUnifiedAbout;
@property BOOL forceLargeMargins;
@property (retain) NSString *displayLanguage;
@property unsigned long long displayDeviceType;
@property BOOL useModalStyle;
@property (nonatomic) BOOL isCombined;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)splashPageWithBundleIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)_defaultButtonTitle;
- (void)scrollToTop;
- (id)initWithPrivacyIdentifier:(id)a0;
- (id)imageFromImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithFlow:(id)a0;
- (void)prepareToPresent;
- (void)_initializeFromBundle;
- (void)prepareContentView;
- (void)donePressed:(id)a0;
- (void)_configurePrivacyLinkButton;
- (void)morePressed:(id)a0;
- (void)addTitle:(id)a0 contentList:(id)a1;
- (void)endSheet;
- (void)endSheetWithReturnCode:(long long)a0;
- (void)_showPrivacyGateway:(id)a0;
- (void)setDismissHandlerForDefaultButton:(id /* block */)a0;

@end
