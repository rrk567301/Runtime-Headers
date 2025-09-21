@class NSArray, UXViewController, NSMutableArray;

@interface _UXNavigationRequest : NSObject {
    NSMutableArray *_addedViewControllers;
}

@property (readonly, nonatomic) long long operation;
@property (readonly, nonatomic) UXViewController *viewController;
@property (readonly, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) char animated;

+ (id)_requestWithOperation:(long long)a0 viewControllers:(id)a1 animated:(char)a2;
+ (id)popRequestWithViewController:(id)a0 animated:(char)a1;
+ (id)pushRequestWithViewController:(id)a0 animated:(char)a1;
+ (id)setRequestWithViewControllers:(id)a0 animated:(char)a1;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToNavigationRequest:(id)a0;
- (void)setupContainmentIfNeededInParentViewController:(id)a0;
- (void)tearDownContainmentIfNeeded;

@end
