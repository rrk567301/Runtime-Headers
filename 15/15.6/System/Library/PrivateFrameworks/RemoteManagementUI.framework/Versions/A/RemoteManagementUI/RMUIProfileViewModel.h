@class RMUIInteractiveProfileFooterViewModel, NSString, RMUIInteractiveProfileToggleViewModel, RMModelDeclarationBase;

@interface RMUIProfileViewModel : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property short symbol;
@property (retain) NSString *title;
@property (retain) NSString *value;
@property (retain) NSString *profileIdentifier;
@property (retain) RMModelDeclarationBase *declaration;
@property char isInteractiveProfile;
@property (retain) NSString *interactiveDetailsText;
@property (retain) RMUIInteractiveProfileToggleViewModel *toggleViewModel;
@property (retain) RMUIInteractiveProfileFooterViewModel *footerViewModel;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearModel;
- (void)setInteractiveProfileActive:(char)a0 profileIdentifier:(id)a1;

@end
