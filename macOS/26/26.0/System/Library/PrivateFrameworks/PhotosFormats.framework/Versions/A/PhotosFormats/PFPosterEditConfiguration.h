@class NSString, PFParallaxLayerStyle;

@interface PFPosterEditConfiguration : NSObject <NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PFParallaxLayerStyle *style;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedVisibleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedLandscapeVisibleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedAdaptiveVisibleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedLandscapeAdaptiveVisibleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedAdaptiveTimeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedLandscapeAdaptiveTimeFrame;
@property (nonatomic) BOOL isPerspectiveZoomEnabled;
@property (nonatomic) BOOL isDepthEnabled;
@property (nonatomic) BOOL isDepthAvailable;
@property (nonatomic) BOOL isLandscapeDepthEnabled;
@property (nonatomic) BOOL isSettlingEffectEnabled;
@property (nonatomic) BOOL isSettlingEffectAvailable;
@property (nonatomic) BOOL isSpatialPhotoEnabled;
@property (nonatomic) BOOL isSpatialPhotoAvailable;
@property (nonatomic) BOOL preserveLegacyHeadroom;
@property (nonatomic) BOOL userAdjustedVisibleFrame;
@property (nonatomic) double additionalTitleLabelHeight;
@property (nonatomic) double landscapeAdditionalTitleLabelHeight;
@property (nonatomic) double userAdjustedTitleLabelHeightOffset;
@property (nonatomic) double landscapeUserAdjustedTitleLabelHeightOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)analyticsPayload;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
