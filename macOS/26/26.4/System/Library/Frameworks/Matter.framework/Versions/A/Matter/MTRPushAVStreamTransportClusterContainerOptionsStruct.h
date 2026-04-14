@class NSNumber, MTRPushAVStreamTransportClusterCMAFContainerOptionsStruct;

@interface MTRPushAVStreamTransportClusterContainerOptionsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *containerType;
@property (copy, nonatomic) MTRPushAVStreamTransportClusterCMAFContainerOptionsStruct *cmafContainerOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
