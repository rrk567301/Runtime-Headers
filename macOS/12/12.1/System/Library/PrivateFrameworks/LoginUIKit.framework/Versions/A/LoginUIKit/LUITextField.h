@interface LUITextField : NSTextField

+ (void)initialize;
+ (Class)cellClass;

- (void)setDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)designatedFocusRingView;
- (void)mouseUp:(id)a0;
- (void)setPlaceholderString:(id)a0;
- (id)_textColor;
- (void)textDidEndEditing:(id)a0;
- (BOOL)shouldSmoothFonts;
- (void)setShouldSmoothFonts:(BOOL)a0;
- (id)_placeholderTextColor;

@end
