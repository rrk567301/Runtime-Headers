@class NSColor, NSImage;

@interface NSColorWellAquaduckVisualProvider : NSObject <NSColorWellVisualProvider> {
    void /* unknown type, empty encoding */ hostingView;
}

@property (class, nonatomic, readonly) BOOL isSupported;

@property (nonatomic, retain) NSColor *color;
@property (nonatomic) BOOL mouseInside;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSImage *image;
@property (nonatomic, retain) id showColorPanelTarget;
@property (nonatomic) SEL showColorPanelAction;
@property (nonatomic, weak) void /* function */ controlView;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic) BOOL supportsAlpha;
@property (nonatomic) double maxGain;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL bordered;
@property (nonatomic) BOOL isOnEndcapButton;
@property (nonatomic) BOOL showsMixedState;
@property (nonatomic) BOOL hasPullDownBehavior;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } relativeRectForPopover;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } minimumDrawingSize;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEnabled;
- (void)layout;
- (BOOL)isActive;
- (id)init;
- (void).cxx_destruct;
- (void)drawWellInside:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)hitTestForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isBordered;
- (BOOL)isMouseInside;
- (void)setNeedsDisplay:(BOOL)a0;

@end
