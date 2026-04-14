@class NSNumber, MTRCameraAVStreamManagementClusterVideoResolutionStruct;

@interface MTRCameraAVStreamManagementClusterSnapshotCapabilitiesStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRCameraAVStreamManagementClusterVideoResolutionStruct *resolution;
@property (copy, nonatomic) NSNumber *maxFrameRate;
@property (copy, nonatomic) NSNumber *imageCodec;
@property (copy, nonatomic) NSNumber *requiresEncodedPixels;
@property (copy, nonatomic) NSNumber *requiresHardwareEncoder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
