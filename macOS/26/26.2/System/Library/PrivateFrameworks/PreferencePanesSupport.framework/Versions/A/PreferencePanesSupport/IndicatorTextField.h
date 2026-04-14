@class IndicatorImageView, NSTextField;

@interface IndicatorTextField : NSTextField {
    BOOL mShowIndicator;
    IndicatorImageView *mIdicatorImageView;
}

@property (retain) NSTextField *noteField;

+ (id)_indicatorImage;

- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShowIndicator:(BOOL)a0;
- (void)setShowIndicator:(BOOL)a0 noteString:(id)a1;
- (BOOL)isShowingIndicator;

@end
