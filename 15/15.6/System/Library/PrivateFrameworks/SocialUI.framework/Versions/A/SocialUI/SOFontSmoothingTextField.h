@interface SOFontSmoothingTextField : NSTextField

@property char disableFontSmoothing;

- (char)canSmoothFontsInLayer;
- (char)shouldSetFontSmoothingBackgroundColor;

@end
