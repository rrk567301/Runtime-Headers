@class NSArray, WFContextualAction, WFColor;

@interface WFFocusConfigurationContextualActionOptions : NSObject

@property (readonly, nonatomic) WFContextualAction *contextualAction;
@property (readonly, nonatomic) NSArray *footerButtons;
@property (readonly, copy, nonatomic) WFColor *mastheadTintColor;
@property (readonly, nonatomic) char showsEnablementButton;
@property (readonly, nonatomic, getter=isEnabled) char enabled;

- (void).cxx_destruct;
- (id)initWithContextualAction:(id)a0;
- (id)initWithContextualAction:(id)a0 footerButtons:(id)a1;
- (id)initWithContextualAction:(id)a0 footerButtons:(id)a1 showsEnablementButton:(char)a2 isEnabled:(char)a3;
- (id)initWithContextualAction:(id)a0 footerButtons:(id)a1 showsEnablementButton:(char)a2 isEnabled:(char)a3 mastheadTintColor:(id)a4;

@end
