@class NSView, NSLayoutConstraint;

@interface _MKStackingContentView : _MKUIViewControllerRootView {
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_middleConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (retain, nonatomic) NSView *topView;
@property (retain, nonatomic) NSView *bottomView;
@property (readonly, nonatomic) NSLayoutConstraint *bottomConstraint;

- (id)initWithViewController:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)vibrancyGroupName;

@end
