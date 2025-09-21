@class NSTextField, IndicatorImageView;

@interface IndicatorSecureTextField : NSSecureTextField {
    char mShowIndicator;
    IndicatorImageView *mIdicatorImageView;
    NSTextField *mNoteField;
}

- (void).cxx_destruct;
- (char)_isPasswordAutofillEnabled;
- (char)becomeFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShowIndicator:(char)a0;
- (void)setShowIndicator:(char)a0 noteString:(id)a1;
- (char)isShowingIndicator;
- (id)noteField;
- (void)setNoteField:(id)a0;

@end
