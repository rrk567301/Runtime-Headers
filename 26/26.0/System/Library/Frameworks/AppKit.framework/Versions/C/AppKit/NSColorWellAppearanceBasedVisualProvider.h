@class NSString, NSImage, NSColorWellEndcapButton, NSColorWell, NSColor;

@interface NSColorWellAppearanceBasedVisualProvider : NSObject <NSColorWellVisualProvider> {
    NSColor *_color;
    NSImage *_image;
    NSColorWellEndcapButton *_endcapButton;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _wellFrame;
    unsigned long long _controlSize;
    long long _style;
    unsigned char _subclassOverridesDrawColor : 1;
    unsigned char _controlSubclassOverridesDrawColor : 1;
    unsigned char _enabled : 1;
    unsigned char _active : 1;
}

@property (copy) NSColor *color;
@property (retain) NSImage *image;
@property (weak) NSColorWell *controlView;
@property unsigned long long controlSize;
@property long long style;
@property BOOL supportsAlpha;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isActive) BOOL active;
@property (getter=isBordered) BOOL bordered;
@property BOOL showsMixedState;
@property BOOL hasPullDownBehavior;
@property (getter=isMouseInside) BOOL mouseInside;
@property double maxGain;
@property (weak) id showColorPanelTarget;
@property SEL showColorPanelAction;
@property (getter=isOnEndcapButton) BOOL isOnEndcapButton;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly) double baselineOffsetFromBottom;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } relativeRectForPopover;
@property (readonly) struct CGSize { double x0; double x1; } minimumDrawingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (void)drawWellInside:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_bottomInset;
- (id)_coreUIBorderDrawOptions;
- (id)_coreUIInnerBorderDrawOptionsMasked:(BOOL)a0;
- (id)_coreUIRolloverArrowOptions;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawInteriorBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_drawingRectForWell;
- (double)_endcapButtonOverlap;
- (void)_updateEndCap;
- (BOOL)drawColor;
- (long long)hitTestForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (double)wellBorderThickness;

@end
