@interface VSTVolumeDataCreateFromFloatInfo : NSObject

@property (nonatomic) unsigned long long numSplats;
@property (nonatomic) unsigned long long shOrder;
@property (nonatomic) long long packingMethod;
@property (nonatomic) const float *splatPositions;
@property (nonatomic) const float *splatColors;
@property (nonatomic) const float *splatScales;
@property (nonatomic) const float *splatRotations;
@property (nonatomic) const float *splatSHs;
@property (nonatomic) const float *splatNormals;

- (id)init;

@end
