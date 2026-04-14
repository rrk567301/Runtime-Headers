@protocol VKCImageSubjectHighlightViewDelegate;

@interface VKCImageSubjectHighlightView : VKCImageSubjectBaseView

@property (weak, nonatomic) id<VKCImageSubjectHighlightViewDelegate> delegate;
@property (nonatomic) BOOL subjectHighlightActive;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;
- (void)configureStateForSubjectHighlightActiveAnimated:(BOOL)a0;
- (void)loadImageSubjectIfNecessaryWithCompletion:(id /* block */)a0;
- (void)setMaskRemoveBackgroundResult:(id)a0;
- (void)setSubjectHighlightActive:(BOOL)a0 animated:(BOOL)a1;

@end
