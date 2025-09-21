@interface CNUIViewRevealer : NSObject

@property (nonatomic) char shouldAnimate;

+ (id)defaultRevealer;
+ (id)animatingRevealer;
+ (id)revealer;

- (void)hideView:(id)a0;
- (id)initWithShouldAnimte:(char)a0;
- (void)showView:(id)a0;

@end
