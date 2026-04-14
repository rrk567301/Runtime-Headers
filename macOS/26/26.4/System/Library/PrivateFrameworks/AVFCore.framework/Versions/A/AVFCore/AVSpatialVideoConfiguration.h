@class NSArray, NSNumber;

@interface AVSpatialVideoConfiguration : NSObject

@property (copy) NSArray *cameraCalibrationDataLensCollection;
@property (copy) NSNumber *horizontalFieldOfView;
@property (copy) NSNumber *cameraSystemBaseline;
@property (copy) NSNumber *disparityAdjustment;

- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)toDictionary;
- (void)dealloc;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

@end
