@class NSView, AMPContentAdvisoryModel, _AdvisoryDisplay;

@interface AMPContentAdvisoryLockup : AMPBindableView

@property (retain, nonatomic) AMPContentAdvisoryModel *viewModel;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) int currentSize;
@property (retain, nonatomic) NSView *contentArea;
@property (retain, nonatomic) _AdvisoryDisplay *currentDisplay;
@property (retain, nonatomic) _AdvisoryDisplay *animatingOutDisplay;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)animateToViewModel:(id)a0 completion:(id /* block */)a1;
- (void)commonSetup;
- (id)propertyKeysForViewSpy;
- (int)sizeForWidth:(double)a0;

@end
