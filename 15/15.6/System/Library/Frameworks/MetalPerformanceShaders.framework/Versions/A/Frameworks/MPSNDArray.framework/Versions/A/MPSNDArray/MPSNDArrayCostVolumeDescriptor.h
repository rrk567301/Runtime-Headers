@interface MPSNDArrayCostVolumeDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned int samplingMode;
@property (nonatomic) unsigned int nearestMode;
@property (nonatomic) unsigned int dataFormat;
@property (nonatomic) int paddingMode;
@property (nonatomic) char normalizeCoordinates;
@property (nonatomic) char relativeCoordinates;
@property (nonatomic) char alignCorners;
@property (nonatomic) char coordinate1DInWidth;
@property (nonatomic) double constantValue;
@property (nonatomic) struct MPSNDArrayCostVolumeWindowSizes { unsigned long long size[2]; } windowSizes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
