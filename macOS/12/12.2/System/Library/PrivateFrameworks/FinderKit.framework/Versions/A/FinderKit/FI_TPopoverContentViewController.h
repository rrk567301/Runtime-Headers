@class FI_TPopoverController, NSValue, NSLayoutConstraint, NSStackView;

@interface FI_TPopoverContentViewController : FI_TViewController {
    struct TNSWeakPtr<FI_TPopoverController, void> { NSValue *fWeakObject; } _weakPopoverController;
    NSStackView *_stackView;
    struct TNSRef<NSLayoutConstraint, void> { NSLayoutConstraint *fRef; } _widthConstraint;
}

@property (readonly, weak, nonatomic) FI_TPopoverController *popoverController;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setWidth:(double)a0;
- (double)width;
- (void)addSubview:(id)a0;
- (void)performClose:(id)a0;
- (void)keyDown:(id)a0;
- (void)setPopoverController:(id)a0;
- (void)removeSubview:(id)a0;

@end
