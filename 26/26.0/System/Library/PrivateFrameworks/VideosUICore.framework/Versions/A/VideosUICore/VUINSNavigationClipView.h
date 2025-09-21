@class VUINSNavigationPaletteView;

@interface VUINSNavigationClipView : NSClipView

@property (retain, nonatomic) VUINSNavigationPaletteView *navigationPaletteView;
@property (nonatomic) BOOL isSidebarEnabled;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void)layout;
- (void).cxx_destruct;

@end
