@class NSString, CUICatalog, CUIStyleEffectConfiguration;

@interface NSStringDrawingContext : NSObject <NSLayoutManagerDelegate> {
    double _minimumTrackingAdjustment;
    double _actualTrackingAdjustment;
    struct { unsigned char _wantsNumberOfLineFragments : 1; unsigned char _wrapsForTruncationMode : 1; unsigned char _wantsBaselineOffset : 1; unsigned char _wantsScaledBaselineOffset : 1; unsigned char _wantsScaledLineHeight : 1; unsigned char _drawsDebugBaselines : 1; unsigned char _wantsMultipleDeviceMetrics : 1; unsigned char _cachesLayout : 1; unsigned char _usesSimpleTextEffects : 1; unsigned char _activeRenderers : 4; unsigned char _applicationPlatformContext : 3; } _sdcFlags;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } multilineDeviceMetricsRect;
@property BOOL wantsMultilineDeviceMetrics;
@property BOOL wantsNumberOfLineFragments;
@property BOOL wrapsForTruncationMode;
@property unsigned long long maximumNumberOfLines;
@property BOOL wantsBaselineOffset;
@property BOOL wantsScaledBaselineOffset;
@property double scaledBaselineOffset;
@property BOOL wantsScaledLineHeight;
@property double scaledLineHeight;
@property BOOL drawsDebugBaselines;
@property BOOL cachesLayout;
@property (retain) id layout;
@property BOOL usesSimpleTextEffects;
@property (copy) id /* block */ linkTextAttributesProvider;
@property BOOL hasTruncatedRanges;
@property (retain) CUICatalog *cuiCatalog;
@property (retain) CUIStyleEffectConfiguration *cuiStyleEffects;
@property long long fallbackBaseWritingDirection;
@property double actualScaleFactor;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalBounds;
@property unsigned long long numberOfLineFragments;
@property double baselineOffset;
@property double firstBaselineOffset;
@property (nonatomic) unsigned long long activeRenderers;
@property double minimumScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)applicationFrameworkContext;
- (void)setApplicationFrameworkContext:(long long)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)layoutManager:(id)a0 linkAttributesForAttributes:(id)a1 forCharacterAtIndex:(unsigned long long)a2;

@end
