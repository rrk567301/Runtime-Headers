@class NSVisualEffectView;

@interface SidebarTableRowView : NSTableRowView {
    NSVisualEffectView *_selectionBackgroundView;
}

@property (nonatomic) char shouldDrawSelectionOnlyWhenEmphasized;
@property (nonatomic, getter=isHighlighted) char highlighted;

- (void).cxx_destruct;
- (void)_updateSelectedBackgroundView;
- (long long)interiorBackgroundStyle;
- (void)setEmphasized:(char)a0;
- (void)setSelected:(char)a0;
- (char)_shouldDrawSelectionBackground;

@end
