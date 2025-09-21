@class NSString, CUICatalog, CUIStyleEffectConfiguration;

@interface NSStringDrawingContext : NSObject <NSLayoutManagerDelegate> {
    double _minimumTrackingAdjustment;
    struct { unsigned char _wantsNumberOfLineFragments : 1; unsigned char _wrapsForTruncationMode : 1; unsigned char _wantsBaselineOffset : 1; unsigned char _wantsScaledBaselineOffset : 1; unsigned char _wantsScaledLineHeight : 1; unsigned char _drawsDebugBaselines : 1; unsigned char _wantsMultipleDeviceMetrics : 1; unsigned char _cachesLayout : 1; unsigned char _usesSimpleTextEffects : 1; unsigned char _activeRenderers : 4; unsigned char _applicationPlatformContext : 3; } _sdcFlags;
}

@property double actualScaleFactor;
@property (nonatomic) double actualTrackingAdjustment;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalBounds;
@property (nonatomic) char wantsNumberOfLineFragments;
@property (nonatomic) unsigned long long numberOfLineFragments;
@property (nonatomic) char wrapsForTruncationMode;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) char wantsBaselineOffset;
@property (nonatomic) double baselineOffset;
@property (nonatomic) char wantsScaledBaselineOffset;
@property (nonatomic) double scaledBaselineOffset;
@property (nonatomic) char wantsScaledLineHeight;
@property (nonatomic) double scaledLineHeight;
@property (nonatomic) double firstBaselineOffset;
@property (retain) CUICatalog *cuiCatalog;
@property (retain) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (nonatomic) char drawsDebugBaselines;
@property (nonatomic) char cachesLayout;
@property (retain, nonatomic) id layout;
@property (nonatomic) char usesSimpleTextEffects;
@property (nonatomic) unsigned long long activeRenderers;
@property (copy) id /* block */ linkTextAttributesProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } multilineDeviceMetricsRect;
@property (nonatomic) char wantsMultilineDeviceMetrics;
@property char hasTruncatedRanges;
@property double minimumScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setApplicationFrameworkContext:(long long)a0;
- (long long)applicationFrameworkContext;
- (id)layoutManager:(id)a0 linkAttributesForAttributes:(id)a1 forCharacterAtIndex:(unsigned long long)a2;

@end
