@class CDPUIAccessCodeEntryTextField, OBTemplateContainerViewController, OBTemplateView, NSString, NSText, AKInheritanceAccessKey, NSWindow;

@interface CDPUIInheritanceUIProviderImpl : NSObject <CDPUIAccessCodeEntryTextFieldDelegate, CDPUIInheritanceUIProvider>

@property (weak, nonatomic) NSWindow *keyWindow;
@property (weak, nonatomic) NSWindow *accessKeyWindow;
@property (retain, nonatomic) OBTemplateContainerViewController *containerView;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (retain, nonatomic) CDPUIAccessCodeEntryTextField *accessCodeTextView;
@property (retain, nonatomic) NSText *errorTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setupTemplateView;
- (void)_attemptEntry;
- (void)_linkButtonTapped;
- (void)accessCodeEntryTextFieldDidUpdate:(id)a0;
- (void)accessCodeEntryTextFieldDidReturn:(id)a0;
- (void)promptForAccessCodeForAccessKey:(id)a0 completion:(id /* block */)a1;
- (id)initWithKeyWindow:(id)a0;
- (id)_buildWindow;
- (id)_buildInputView;
- (id)_buildTextView;
- (id)_buildErrorView;
- (id)_wrappingKeySubstringFromAccessKey:(id)a0;

@end
