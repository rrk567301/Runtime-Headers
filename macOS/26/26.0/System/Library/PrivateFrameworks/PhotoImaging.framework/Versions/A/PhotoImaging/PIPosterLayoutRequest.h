@class NSNumber, PFWallpaperCompoundDeviceConfiguration;
@protocol NUImageBuffer, PIPosterLayoutProvider, PFParallaxAssetRegions;

@interface PIPosterLayoutRequest : NURenderRequest

@property (retain, nonatomic) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (retain, nonatomic) id<PFParallaxAssetRegions> layoutRegions;
@property (nonatomic) BOOL shouldConstrainLayoutToBounds;
@property (nonatomic) BOOL hasSettlingEffect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedLayoutBounds;
@property (retain, nonatomic) id<NUImageBuffer> segmentationMatte;
@property (retain, nonatomic) id<NUImageBuffer> segmentationConfidenceMap;
@property (nonatomic) unsigned long long segmentationClassification;
@property (nonatomic) BOOL shouldComputeAllScores;
@property (nonatomic) BOOL shouldConsiderHeadroom;
@property (nonatomic) BOOL shouldComputeSpatialLayout;
@property (nonatomic) double spatialPadding;
@property (nonatomic) unsigned long long allowedLayoutStrategies;
@property (retain, nonatomic) NSNumber *allowedClockStretch;
@property (retain, nonatomic) id<PIPosterLayoutProvider> layoutProvider;
@property (nonatomic) unsigned long long role;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInit;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
