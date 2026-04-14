@class NSLayoutConstraint, NSVisualEffectView;

@interface SidebarTableRowView : NSTableRowView {
    NSVisualEffectView *_selectionBackgroundView;
    NSLayoutConstraint *_centerYConstraint;
}

@property (nonatomic) BOOL shouldDrawSelectionOnlyWhenEmphasized;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)layout;
- (void)setEmphasized:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)_updateSelectedBackgroundView;
- (long long)interiorBackgroundStyle;
- (BOOL)_shouldDrawSelectionBackground;

@end
