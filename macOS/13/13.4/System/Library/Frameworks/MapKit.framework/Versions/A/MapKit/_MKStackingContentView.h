@class NSView, NSLayoutConstraint;

@interface _MKStackingContentView : _MKUIViewControllerRootView {
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_middleConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (retain, nonatomic) NSView *topView;
@property (retain, nonatomic) NSView *bottomView;
@property (readonly, nonatomic) NSLayoutConstraint *bottomConstraint;

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)updateConstraints;
- (id)vibrancyGroupName;

@end
