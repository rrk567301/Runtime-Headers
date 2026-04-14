@class NSArray, NSNumber;

@interface AVSpatialVideoConfiguration : NSObject

@property (copy) NSArray *cameraCalibrationDataLensCollection;
@property (copy) NSNumber *horizontalFieldOfView;
@property (copy) NSNumber *cameraSystemBaseline;
@property (copy) NSNumber *disparityAdjustment;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEmpty;
- (id)toDictionary;
- (id)init;
- (void)dealloc;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

@end
