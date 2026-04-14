@interface CNUIViewRevealer : NSObject

@property (nonatomic) BOOL shouldAnimate;

+ (id)revealer;
+ (id)animatingRevealer;
+ (id)defaultRevealer;

- (id)initWithShouldAnimte:(BOOL)a0;
- (void)showView:(id)a0;
- (void)hideView:(id)a0;

@end
