@class IMKUICandidateStepperAccessoryImageView;
@protocol IMKUICandidateStepperViewDelegate;

@interface IMKUICandidateStepperView : NSView

@property (retain, nonatomic) IMKUICandidateStepperAccessoryImageView *topArrowView;
@property (retain, nonatomic) IMKUICandidateStepperAccessoryImageView *bottomArrowView;
@property (nonatomic) BOOL initialized;
@property (weak, nonatomic) id<IMKUICandidateStepperViewDelegate> delegate;

- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (void)setTopStepperState:(BOOL)a0;
- (void)setBottomStepperState:(BOOL)a0;
- (void)setupArrows;
- (void)changeArrowFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stepperAreaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topArrowRectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bottomArrowRectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
