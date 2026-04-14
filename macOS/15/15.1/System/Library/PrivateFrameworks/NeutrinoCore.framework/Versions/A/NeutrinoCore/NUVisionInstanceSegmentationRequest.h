@class NSArray;

@interface NUVisionInstanceSegmentationRequest : NURenderRequest

@property (class, readonly, nonatomic) long long maximumTargetPoints;

@property (retain, nonatomic) NSArray *targetSamplePoints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
