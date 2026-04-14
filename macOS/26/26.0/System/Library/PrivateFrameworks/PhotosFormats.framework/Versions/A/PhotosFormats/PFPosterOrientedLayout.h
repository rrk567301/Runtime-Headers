@class NSString, PFParallaxLayoutConfiguration, NSArray;

@interface PFPosterOrientedLayout : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } extendedImageSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } originalImageExtent;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } extendedImageExtent;
@property (readonly, nonatomic) struct CGSize { double width; double height; } deviceResolution;
@property (readonly, nonatomic) struct CGSize { double width; double height; } parallaxPadding;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveVisibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spatialVisibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spatialAdaptiveFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveInactiveTopFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } parallaxVisibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } parallaxInactiveFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedVisibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedAdaptiveVisibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedAdaptiveTimeFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedAdaptiveTimeFrameInVisibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timeFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveTimeFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } salientContentFrame;
@property (readonly, nonatomic) NSString *clockLayerOrder;
@property (readonly, nonatomic) unsigned long long clockIntersection;
@property (readonly, nonatomic) BOOL canApplyParallax;
@property (readonly, nonatomic) BOOL canApplyHeadroom;
@property (readonly, nonatomic) BOOL isUsingHeadroom;
@property (readonly, nonatomic) BOOL hasTopEdgeContact;
@property (readonly, nonatomic) double maxClockShift;
@property (readonly, nonatomic) unsigned long long layoutVariant;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) PFParallaxLayoutConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *debugLayouts;

+ (id)layoutWithDictionaryRepresentation:(id)a0;

- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)debugSwiftCode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageExtent;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0 deviceResolution:(struct CGSize { double x0; double x1; })a1 parallaxPadding:(struct CGSize { double x0; double x1; })a2 visibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 adaptiveVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 inactiveFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 adaptiveInactiveTopFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 spatialVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 spatialAdaptiveFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 timeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9 adaptiveTimeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a10 salientContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a11 clockLayerOrder:(id)a12 clockIntersection:(unsigned long long)a13 layoutVariant:(unsigned long long)a14 hasTopEdgeContact:(BOOL)a15 maxClockShift:(double)a16 debugLayouts:(id)a17;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0 deviceResolution:(struct CGSize { double x0; double x1; })a1 parallaxPadding:(struct CGSize { double x0; double x1; })a2 visibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 adaptiveVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 inactiveFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 adaptiveInactiveTopFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 timeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 clockLayerOrder:(id)a8 clockIntersection:(unsigned long long)a9 layoutVariant:(unsigned long long)a10 hasTopEdgeContact:(BOOL)a11 maxClockShift:(double)a12 debugLayouts:(id)a13;
- (id)layoutByConformingGenericConfigurationToDevice:(id)a0;
- (id)layoutByUpdatingAdaptiveInactiveFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpdatingAdaptiveTimeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpdatingAdaptiveVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpdatingClockIntersection:(unsigned long long)a0;
- (id)layoutByUpdatingClockLayerOrder:(id)a0;
- (id)layoutByUpdatingConfiguration:(id)a0;
- (id)layoutByUpdatingConfigurationWithSaliency:(id)a0 topEdgeInset:(double)a1;
- (id)layoutByUpdatingImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)layoutByUpdatingInactiveFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpdatingLayoutVariant:(unsigned long long)a0;
- (id)layoutByUpdatingMaxClockShift:(double)a0;
- (id)layoutByUpdatingNormalizedAdaptiveTimeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpdatingNormalizedAdaptiveVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpdatingNormalizedVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpdatingNormalizedVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 remapAdaptiveVisibleFrame:(BOOL)a1;
- (id)layoutByUpdatingVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpgradingToConfiguration:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenExtent;

@end
