@class NSNumber;

@interface MTRPushAVStreamTransportClusterPushTransportBeginEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *connectionID;
@property (copy, nonatomic) NSNumber *triggerType;
@property (copy, nonatomic) NSNumber *activationReason;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
