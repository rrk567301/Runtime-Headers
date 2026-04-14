@interface LUISecureTextFieldCell : NSSecureTextFieldCell

@property BOOL shouldSmoothFonts;

- (id)initWithCoder:(id)a0;
- (void)_setupDefaults;
- (id)init;
- (long long)_typesetterBehavior;
- (id)initTextCell:(id)a0;
- (id)placeholderString;
- (id)setUpFieldEditorAttributes:(id)a0;
- (id)_insertionPointColor;

@end
