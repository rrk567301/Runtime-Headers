@class LNAction, NSArray, WFColor, WFContextualAction, LNFocusConfigurationSuggestionContext, LNFullyQualifiedActionIdentifier;

@interface WFFocusConfigurationRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) LNAction *action;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, copy, nonatomic) LNFullyQualifiedActionIdentifier *actionIdentifier;
@property (readonly, copy, nonatomic) LNFocusConfigurationSuggestionContext *suggestionContext;
@property (readonly, copy, nonatomic) NSArray *footerButtons;
@property (readonly, copy, nonatomic) WFColor *mastheadTintColor;
@property (readonly, nonatomic) WFContextualAction *contextualAction;
@property (readonly, nonatomic) char showsEnablementButton;
@property (readonly, nonatomic, getter=isEnabled) char enabled;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0;
- (id)initWithContextualAction:(id)a0 footerButtons:(id)a1 showsEnablementButton:(char)a2 isEnabled:(char)a3 mastheadTintColor:(id)a4;
- (id)initWithContextualActionOptions:(id)a0;
- (id)initWithFocusConfigurationActionIdentifier:(id)a0 action:(id)a1 suggestionContext:(id)a2 footerButtons:(id)a3 showsEnablementButton:(char)a4 isEnabled:(char)a5;
- (void)loadFocusActionWithCompletion:(id /* block */)a0;

@end
