@interface LUISecureTextFieldCell : NSSecureTextFieldCell

@property BOOL shouldSmoothFonts;

- (void)_setupDefaults;
- (id)initWithCoder:(id)a0;
- (id)init;
- (long long)_typesetterBehavior;
- (id)initTextCell:(id)a0;
- (id)placeholderString;
- (id)setUpFieldEditorAttributes:(id)a0;
- (id)_insertionPointColor;

@end
