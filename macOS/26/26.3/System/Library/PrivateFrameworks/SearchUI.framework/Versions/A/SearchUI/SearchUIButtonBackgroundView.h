@class NSColor;

@interface SearchUIButtonBackgroundView : TLKProminenceView

@property (retain, nonatomic) NSColor *color;
@property (nonatomic) BOOL useHierarchicalColorRendering;

- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;

@end
