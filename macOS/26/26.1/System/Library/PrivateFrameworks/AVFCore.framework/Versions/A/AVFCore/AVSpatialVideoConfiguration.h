@class NSArray, NSNumber;

@interface AVSpatialVideoConfiguration : NSObject

@property (copy) NSArray *cameraCalibrationDataLensCollection;
@property (copy) NSNumber *horizontalFieldOfView;
@property (copy) NSNumber *cameraSystemBaseline;
@property (copy) NSNumber *disparityAdjustment;

- (id)toDictionary;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

@end
