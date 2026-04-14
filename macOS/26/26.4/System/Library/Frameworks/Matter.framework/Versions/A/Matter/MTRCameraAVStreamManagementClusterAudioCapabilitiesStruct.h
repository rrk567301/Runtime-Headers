@class NSNumber, NSArray;

@interface MTRCameraAVStreamManagementClusterAudioCapabilitiesStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *maxNumberOfChannels;
@property (copy, nonatomic) NSArray *supportedCodecs;
@property (copy, nonatomic) NSArray *supportedSampleRates;
@property (copy, nonatomic) NSArray *supportedBitDepths;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
