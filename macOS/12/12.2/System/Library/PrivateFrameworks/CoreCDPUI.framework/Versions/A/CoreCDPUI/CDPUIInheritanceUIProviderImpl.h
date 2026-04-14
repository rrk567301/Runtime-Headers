@class CDPUIAccessCodeEntryTextField, OBTemplateContainerViewController, OBTemplateView, AKInheritanceAccessKey, NSWindow;

@interface CDPUIInheritanceUIProviderImpl : NSObject <CDPUIInheritanceUIProvider>

@property (weak, nonatomic) NSWindow *keyWindow;
@property (weak, nonatomic) NSWindow *accessKeyWindow;
@property (retain, nonatomic) OBTemplateContainerViewController *containerView;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (retain, nonatomic) CDPUIAccessCodeEntryTextField *accessCodeTextView;

- (void).cxx_destruct;
- (void)_setupTemplateView;
- (void)_doneTapped;
- (id)initWithKeyWindow:(id)a0;
- (void)promptForAccessCodeForAccessKey:(id)a0 completion:(id /* block */)a1;
- (id)_buildWindow;
- (void)_linkButtonTapped;
- (id)_buildInputView;
- (id)_buildTextView;
- (id)_wrappingKeySubstringFromAccessKey:(id)a0;

@end
