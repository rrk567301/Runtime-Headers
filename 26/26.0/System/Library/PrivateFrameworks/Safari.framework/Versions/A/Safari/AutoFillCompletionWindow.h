@interface AutoFillCompletionWindow : CompletionWindow

+ (double)defaultCornerRadius;
+ (BOOL)shouldUseGlassBackdropView;

- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;

@end
