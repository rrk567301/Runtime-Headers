@class NSExtension, NSArray, LTUISourceMeta, NSString, NSAttributedString, NSRemoteViewController;

@interface LTUITranslationViewController : NSViewController <LTUIViewServiceExtensionHostProtocol> {
    unsigned long long cplID;
}

@property (class, readonly, getter=isAvailable) BOOL available;

@property (retain, nonatomic) id extensionMatchToken;
@property (retain, nonatomic) NSRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) NSAttributedString *text;
@property (copy, nonatomic) NSArray *ignoredAttributes;
@property (weak, nonatomic) id sourceView;
@property (nonatomic) BOOL isSourceEditable;
@property (retain, nonatomic) LTUISourceMeta *sourceMeta;
@property (copy, nonatomic) id /* block */ replacementHandler;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)_userInfo;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)finishWithTranslation:(id)a0;
- (void)receiveExtensions:(id)a0;
- (id)_sourceInputContext;
- (void)_completeWithItem:(id)a0;
- (void)replaceInEditor:(id)a0 translation:(id)a1;

@end
