@class PDFView, NSColor, NSAppearance;

@interface PDFRenderingProperties : NSObject {
    PDFView *_pdfView;
    long long _displayBox;
    BOOL _shouldAntiAlias;
    double _greekingThreshold;
    long long _interpolationQuality;
    double _lineWidthThreshold;
    NSColor *_pageColor;
    BOOL _darkMode;
    NSColor *_pageBackgroundColor;
    BOOL _enableRoundPageCorners;
    BOOL _enablePageShadows;
    BOOL _enableTileEdgeColoring;
    BOOL _enableAccessibilityDrawing;
    BOOL _enableTileUpdates;
    BOOL _enableBackgroundImages;
    BOOL _isUsingPDFExtensionView;
    struct CGColorSpace { } *_deviceColorSpace;
}

@property (class, readonly, getter=isSolariumEnabled) BOOL solariumEnabled;
@property (class, readonly) struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; } smartInvertCAColorMatrix;
@property (class, readonly) struct CGMatrixFilter { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; } smartInvertCGMatrixFilter;

@property (weak, nonatomic, setter=setPDFView:) PDFView *pdfView;
@property (nonatomic) long long displayBox;
@property (nonatomic) BOOL shouldAntiAlias;
@property (nonatomic) double greekingThreshold;
@property (nonatomic) long long interpolationQuality;
@property (retain, nonatomic) NSAppearance *appearance;
@property (nonatomic) BOOL allowsDarkMode;
@property (readonly, nonatomic, getter=isDarkMode) BOOL darkMode;
@property (readonly, nonatomic) NSColor *pageBackgroundColor;
@property (retain, nonatomic) NSColor *darkModePageBackgroundColor;
@property (nonatomic) double lineWidthThreshold;
@property (retain, nonatomic) NSColor *pageColor;
@property (nonatomic) BOOL enablePageShadows;
@property (readonly) double pageCornerRadius;
@property (nonatomic) BOOL enableRoundPageCorners;
@property (nonatomic) BOOL enableTileUpdates;
@property (nonatomic) BOOL enableBackgroundImages;
@property (nonatomic) BOOL isUsingPDFExtensionView;
@property (nonatomic) struct CGColorSpace { } *deviceColorSpace;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_notifyPropertyChanged:(long long)a0;
- (double)adjustedPageCornerRadiusForPageSize:(struct CGSize { double x0; double x1; })a0 magnification:(double)a1;
- (id)resolvedColor:(id)a0;

@end
