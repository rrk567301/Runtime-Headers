@class NSNumber, MTRCameraAVStreamManagementClusterVideoResolutionStruct;

@interface MTRCameraAVStreamManagementClusterVideoStreamStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *videoStreamID;
@property (copy, nonatomic) NSNumber *streamUsage;
@property (copy, nonatomic) NSNumber *videoCodec;
@property (copy, nonatomic) NSNumber *minFrameRate;
@property (copy, nonatomic) NSNumber *maxFrameRate;
@property (copy, nonatomic) MTRCameraAVStreamManagementClusterVideoResolutionStruct *minResolution;
@property (copy, nonatomic) MTRCameraAVStreamManagementClusterVideoResolutionStruct *maxResolution;
@property (copy, nonatomic) NSNumber *minBitRate;
@property (copy, nonatomic) NSNumber *maxBitRate;
@property (copy, nonatomic) NSNumber *minKeyFrameInterval;
@property (copy, nonatomic) NSNumber *maxKeyFrameInterval;
@property (copy, nonatomic) NSNumber *watermarkEnabled;
@property (copy, nonatomic) NSNumber *osdEnabled;
@property (copy, nonatomic) NSNumber *referenceCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
