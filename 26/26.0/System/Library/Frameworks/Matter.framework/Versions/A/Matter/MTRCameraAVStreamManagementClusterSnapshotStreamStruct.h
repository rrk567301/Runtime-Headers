@class NSNumber, MTRCameraAVStreamManagementClusterVideoResolutionStruct;

@interface MTRCameraAVStreamManagementClusterSnapshotStreamStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *snapshotStreamID;
@property (copy, nonatomic) NSNumber *imageCodec;
@property (copy, nonatomic) NSNumber *frameRate;
@property (copy, nonatomic) MTRCameraAVStreamManagementClusterVideoResolutionStruct *minResolution;
@property (copy, nonatomic) MTRCameraAVStreamManagementClusterVideoResolutionStruct *maxResolution;
@property (copy, nonatomic) NSNumber *quality;
@property (copy, nonatomic) NSNumber *referenceCount;
@property (copy, nonatomic) NSNumber *encodedPixels;
@property (copy, nonatomic) NSNumber *hardwareEncoder;
@property (copy, nonatomic) NSNumber *watermarkEnabled;
@property (copy, nonatomic) NSNumber *osdEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
