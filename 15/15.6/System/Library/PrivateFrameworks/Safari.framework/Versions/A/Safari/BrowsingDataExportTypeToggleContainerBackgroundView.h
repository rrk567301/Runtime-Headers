@interface BrowsingDataExportTypeToggleContainerBackgroundView : NSView

- (void)viewDidChangeEffectiveAppearance;
- (char)wantsUpdateLayer;
- (void)updateBorderColor;

@end
