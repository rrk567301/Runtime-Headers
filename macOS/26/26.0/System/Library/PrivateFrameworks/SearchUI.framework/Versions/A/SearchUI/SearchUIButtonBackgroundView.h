@class NSColor;

@interface SearchUIButtonBackgroundView : TLKProminenceView

@property (retain, nonatomic) NSColor *color;
@property (nonatomic) BOOL useHierarchicalColorRendering;

- (BOOL)allowsVibrancy;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;

@end
