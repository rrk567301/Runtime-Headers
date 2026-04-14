@protocol TKTonePickerViewDelegate;

@interface TKTonePickerView : NSView {
    BOOL _isPerformingBlockAffectingBaselineOffsetFromBottom;
}

@property (weak, nonatomic) id<TKTonePickerViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (double)baselineOffsetFromBottom;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (id)_viewForBaselineLayout;
- (id)_viewForSizingTonePickerView;
- (void)_performBlockAffectingBaselineOffsetFromBottom:(id /* block */)a0;

@end
