@class NSViewController, NSLayoutConstraint;

@interface MUFixedHeightAwareViewController : NSViewController {
    NSLayoutConstraint *_heightConstraint;
    NSViewController *_childVC;
}

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)initWithViewController:(id)a0;
- (void)_setupChildVC;

@end
