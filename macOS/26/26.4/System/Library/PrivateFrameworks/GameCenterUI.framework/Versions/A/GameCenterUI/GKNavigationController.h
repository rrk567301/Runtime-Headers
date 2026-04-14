@class NSMutableArray;

@interface GKNavigationController : UXNavigationController

@property (retain, nonatomic) NSMutableArray *deferredTransitions;

+ (id)viewControllerWithRestorationIdentifierPath:(id)a0 coder:(id)a1;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)setupGKNavigationController;

@end
