@class NSViewController, NSLayoutConstraint;

@interface MUFixedHeightAwareViewController : NSViewController {
    NSLayoutConstraint *_heightConstraint;
    NSViewController *_childVC;
}

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_setupChildVC;

@end
