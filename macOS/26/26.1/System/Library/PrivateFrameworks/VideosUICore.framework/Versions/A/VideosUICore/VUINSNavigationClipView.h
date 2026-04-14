@class VUINSNavigationPaletteView;

@interface VUINSNavigationClipView : NSClipView

@property (retain, nonatomic) VUINSNavigationPaletteView *navigationPaletteView;
@property (nonatomic) BOOL isSidebarEnabled;

- (void)layout;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void).cxx_destruct;

@end
