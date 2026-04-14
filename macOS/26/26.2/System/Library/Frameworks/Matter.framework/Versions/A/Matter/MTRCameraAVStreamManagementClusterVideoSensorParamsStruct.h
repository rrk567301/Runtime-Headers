@class NSNumber;

@interface MTRCameraAVStreamManagementClusterVideoSensorParamsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sensorWidth;
@property (copy, nonatomic) NSNumber *sensorHeight;
@property (copy, nonatomic) NSNumber *maxFPS;
@property (copy, nonatomic) NSNumber *maxHDRFPS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
