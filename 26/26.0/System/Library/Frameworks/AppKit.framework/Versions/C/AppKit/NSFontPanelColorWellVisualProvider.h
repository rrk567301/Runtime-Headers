@class NSButton, NSString, NSImage, _NSDrawingHandlerView, NSColorWell, NSColor;

@interface NSFontPanelColorWellVisualProvider : NSColorWellAppearanceBasedVisualProvider {
    void /* unknown type, empty encoding */ $__lazy_storage_$_rendersButtonBezel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_solariumMetrics;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bezelRenderingButton;
    void /* function */ symbolNameCharacter;
    void /* function */ symbolNameDocument;
}

@property (nonatomic) long long colorWellType;
@property (nonatomic, retain) NSColor *primaryColor;
@property (nonatomic, retain) NSColor *secondaryColor;
@property (nonatomic) BOOL rendersButtonBezel;
@property (nonatomic) BOOL isToolbarWell;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } minimumDrawingSize;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic, retain) NSColorWell *controlView;
@property (nonatomic, retain) _NSDrawingHandlerView *colorRenderer;
@property (nonatomic) BOOL solariumMetrics;
@property (nonatomic, retain) NSButton *bezelRenderingButton;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } minIntrinsicSize;
@property (nonatomic, readonly) BOOL colorSwatchIsRound;
@property (nonatomic, readonly) BOOL colorIsSelected;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } colorSwatchEdgeInsets;
@property (nonatomic, readonly) NSColor *preferredSwatchColor;
@property (nonatomic, readonly) NSColor *swatchColor;
@property (nonatomic, readonly) NSColor *symbolColor;
@property (nonatomic, readonly) NSColor *contrastColor;
@property (nonatomic, readonly) NSString *symbolNameCharacter;
@property (nonatomic, readonly) NSString *symbolNameDocument;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSImage *symbolImage;

- (id)init;
- (void).cxx_destruct;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_drawColor:(BOOL)a0;
- (id)_swatchColor;
- (BOOL)drawColor;
- (void)setNeedsDisplay:(BOOL)a0;
- (double)swatchCornerRadiusFor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
