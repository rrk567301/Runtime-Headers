@class CALayer, CPKHorizontalPopupMenuView;

@interface CPKHorizontalPopupMenuButton : NSButton {
    CALayer *_highlightLayer;
}

@property BOOL determinate;
@property double contentSize;
@property CPKHorizontalPopupMenuView *parentView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
