@class NSArray, NSNumber;

@interface AVSpatialVideoConfiguration : NSObject

@property (copy) NSArray *cameraCalibrationDataLensCollection;
@property (copy) NSNumber *horizontalFieldOfView;
@property (copy) NSNumber *cameraSystemBaseline;
@property (copy) NSNumber *disparityAdjustment;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)init;
- (id)description;
- (id)toDictionary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

@end
