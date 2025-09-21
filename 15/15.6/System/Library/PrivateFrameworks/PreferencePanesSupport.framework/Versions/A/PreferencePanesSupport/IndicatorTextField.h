@class IndicatorImageView, NSTextField;

@interface IndicatorTextField : NSTextField {
    char mShowIndicator;
    IndicatorImageView *mIdicatorImageView;
}

@property (retain) NSTextField *noteField;

+ (id)_indicatorImage;

- (void).cxx_destruct;
- (char)becomeFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShowIndicator:(char)a0;
- (void)setShowIndicator:(char)a0 noteString:(id)a1;
- (char)isShowingIndicator;

@end
