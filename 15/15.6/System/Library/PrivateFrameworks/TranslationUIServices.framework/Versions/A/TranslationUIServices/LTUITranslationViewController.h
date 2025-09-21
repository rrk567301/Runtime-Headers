@class NSExtension, NSArray, LTUISourceMeta, NSString, NSLocale, NSAttributedString, NSRemoteViewController;
@protocol NSCopying;

@interface LTUITranslationViewController : NSViewController <LTUIViewServiceExtensionHostProtocol, NSPopoverDelegate> {
    unsigned long long cplID;
}

@property (class, readonly, getter=isAvailable) char available;

@property (retain, nonatomic) id extensionMatchToken;
@property (retain, nonatomic) NSRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<NSCopying> requestIdentifier;
@property (nonatomic) char userConsentConfirmed;
@property (nonatomic) char consentDisplayOnly;
@property (copy, nonatomic) NSAttributedString *text;
@property (copy, nonatomic) NSLocale *sourceLocale;
@property (copy, nonatomic) NSLocale *targetLocale;
@property (copy, nonatomic) NSArray *ignoredAttributes;
@property (weak, nonatomic) id sourceView;
@property (weak, nonatomic) id catalystDelegate;
@property (nonatomic) char isSourceEditable;
@property (retain, nonatomic) LTUISourceMeta *sourceMeta;
@property (copy, nonatomic) id /* block */ replacementHandler;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_userInfo;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dismiss;
- (void)loadView;
- (void)popoverDidClose:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)_cleanUpExtension;
- (void)_completeWithItem:(id)a0;
- (void)confirmUserConsent;
- (void)expandSheet;
- (void)finishWithTranslation:(id)a0;
- (void)receiveExtensions:(id)a0;
- (void)remoteIsReady;
- (void)replaceInEditor:(id)a0 translation:(id)a1;

@end
