@protocol NUImageBuffer;

@interface PIParallaxColorAnalysisRequest : NURenderRequest

@property (retain, nonatomic) id<NUImageBuffer> segmentationMatte;
@property (nonatomic) BOOL analyzeBackground;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedClipRect;
@property (nonatomic) long long maxDominantColors;
@property (nonatomic) double dominanceThreshold;
@property (nonatomic) double chromaThreshold;
@property (nonatomic) BOOL analyzeHeadroom;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInit;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
