@interface ANSTISPAlgorithmConfiguration : ANSTConfiguration

@property (readonly, nonatomic) unsigned long long version;
@property (nonatomic) BOOL enableObjectTracking;
@property (nonatomic) BOOL enableSegmentation;
@property (nonatomic) BOOL enableFaceAttributes;
@property (nonatomic) BOOL enableSkinTone;
@property (nonatomic) BOOL enableBodyKeypoints;
@property (nonatomic) BOOL enableDepth;
@property (nonatomic) long long networkResolution;
@property (nonatomic) long long runningFrameRate;

- (id)initWithVersion:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;

@end
