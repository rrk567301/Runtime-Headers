@class NSNumber;

@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) char refineMouthRegion;
@property (nonatomic) char refineLeftEyeRegion;
@property (nonatomic) char refineRightEyeRegion;
@property (nonatomic) char performBlinkDetection;
@property (retain, nonatomic) NSNumber *cascadeStepCount;
@property (nonatomic) unsigned long long constellation;

+ (char)revision:(unsigned long long)a0 supportsConstellation:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)a0;

@end
