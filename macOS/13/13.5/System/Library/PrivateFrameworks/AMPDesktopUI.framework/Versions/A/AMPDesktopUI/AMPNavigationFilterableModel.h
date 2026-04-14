@interface AMPNavigationFilterableModel : AMPFilterableViewModelForwarder

@property (nonatomic) BOOL enableGoBackButton;

+ (id)keyPathsForValuesAffectingGoBackButtonEnabled;

- (BOOL)goBackButtonEnabled;

@end
