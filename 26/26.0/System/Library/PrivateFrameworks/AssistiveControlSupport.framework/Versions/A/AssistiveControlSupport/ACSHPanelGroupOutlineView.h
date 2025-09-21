@class NSColor, NSImage;

@interface ACSHPanelGroupOutlineView : ACSHView {
    NSImage *_backgroundImage;
}

@property (retain, nonatomic) NSColor *outlineColor;
@property (nonatomic) double outlineWidth;
@property (nonatomic) double outlineInset;
@property (nonatomic) BOOL dottedOutline;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsUpdateLayer;
- (id)_backgroundImage;
- (void)_clearBackgroundImage;
- (void)initView;

@end
