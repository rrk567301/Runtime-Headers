@class NSTextField, IndicatorImageView;

@interface IndicatorSecureTextField : NSSecureTextField {
    BOOL mShowIndicator;
    IndicatorImageView *mIdicatorImageView;
    NSTextField *mNoteField;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)_isPasswordAutofillEnabled;
- (void)setShowIndicator:(BOOL)a0;
- (void)setShowIndicator:(BOOL)a0 noteString:(id)a1;
- (BOOL)isShowingIndicator;
- (id)noteField;
- (void)setNoteField:(id)a0;

@end
