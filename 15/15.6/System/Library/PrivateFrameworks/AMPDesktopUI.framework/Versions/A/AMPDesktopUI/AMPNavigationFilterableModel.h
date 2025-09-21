@class AMPNavigationController;

@interface AMPNavigationFilterableModel : AMPFilterableViewModelForwarder

@property (nonatomic) char enableGoBackButton;
@property (weak, nonatomic) AMPNavigationController *owner;

+ (id)keyPathsForValuesAffectingGoBackButtonEnabled;

- (void).cxx_destruct;
- (void)doGoBackAction;
- (char)goBackButtonEnabled;
- (char)optionalGoBackButtonEnabled;

@end
