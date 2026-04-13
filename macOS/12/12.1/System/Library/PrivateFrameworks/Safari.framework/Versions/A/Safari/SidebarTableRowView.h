@class NSVisualEffectView;

@interface SidebarTableRowView : NSTableRowView {
    NSVisualEffectView *_selectionBackgroundView;
}

@property (nonatomic) BOOL shouldDrawSelectionOnlyWhenEmphasized;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void).cxx_destruct;
- (long long)interiorBackgroundStyle;
- (void)setEmphasized:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)_updateSelectedBackgroundView;
- (BOOL)_shouldDrawSelectionBackground;

@end
