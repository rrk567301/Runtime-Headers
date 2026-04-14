@class NSColor, NSImage;

@interface ACSHPanelGroupOutlineView : ACSHView {
    NSImage *_backgroundImage;
}

@property (retain, nonatomic) NSColor *outlineColor;
@property (nonatomic) double outlineWidth;
@property (nonatomic) double outlineInset;
@property (nonatomic) BOOL dottedOutline;

- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_backgroundImage;
- (void)initView;
- (void)_clearBackgroundImage;

@end
