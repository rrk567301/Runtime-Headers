@class NSNumber;

@interface MTRPushAVStreamTransportClusterPushTransportBeginEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *connectionID;
@property (copy, nonatomic) NSNumber *triggerType;
@property (copy, nonatomic) NSNumber *activationReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
