@class NSNumber, MTRPushAVStreamTransportClusterCMAFContainerOptionsStruct;

@interface MTRPushAVStreamTransportClusterContainerOptionsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *containerType;
@property (copy, nonatomic) MTRPushAVStreamTransportClusterCMAFContainerOptionsStruct *cmafContainerOptions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
