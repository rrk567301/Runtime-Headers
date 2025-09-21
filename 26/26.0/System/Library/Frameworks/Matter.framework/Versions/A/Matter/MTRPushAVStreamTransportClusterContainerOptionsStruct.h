@class NSNumber, MTRPushAVStreamTransportClusterCMAFContainerOptionsStruct;

@interface MTRPushAVStreamTransportClusterContainerOptionsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *containerType;
@property (copy, nonatomic) MTRPushAVStreamTransportClusterCMAFContainerOptionsStruct *cmafContainerOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
