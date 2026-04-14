@class AVB17221AEMSamplingRate;

@interface AVB17221AEMCRFStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned char type;
@property unsigned short timestampInterval;
@property unsigned char timestampsPerPDU;
@property (copy, nonatomic) AVB17221AEMSamplingRate *samplingRate;

+ (id)keyPathsForValuesAffectingType;
+ (id)keyPathsForValuesAffectingTimestampInterval;
+ (id)keyPathsForValuesAffectingTimestampsPerPDU;

- (id)init;
- (BOOL)isClockFormat;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (unsigned short)maximumIntervalFrames;

@end
