@interface SOFontSmoothingTextField : NSTextField

@property BOOL disableFontSmoothing;

- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (BOOL)canSmoothFontsInLayer;

@end
