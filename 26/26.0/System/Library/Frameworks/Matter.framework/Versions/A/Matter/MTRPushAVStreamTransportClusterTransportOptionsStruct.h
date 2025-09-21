@class NSString, MTRPushAVStreamTransportClusterContainerOptionsStruct, MTRPushAVStreamTransportClusterTransportTriggerOptionsStruct, NSNumber;

@interface MTRPushAVStreamTransportClusterTransportOptionsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *streamUsage;
@property (copy, nonatomic) NSNumber *videoStreamID;
@property (copy, nonatomic) NSNumber *audioStreamID;
@property (copy, nonatomic) NSNumber *endpointID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) MTRPushAVStreamTransportClusterTransportTriggerOptionsStruct *triggerOptions;
@property (copy, nonatomic) NSNumber *ingestMethod;
@property (copy, nonatomic) MTRPushAVStreamTransportClusterContainerOptionsStruct *containerOptions;
@property (copy, nonatomic) NSNumber *expiryTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
