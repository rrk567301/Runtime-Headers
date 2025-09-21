@class RCPEventSenderProperties, NSArray;

@interface RCPEvent : NSObject <NSCoding, NSCopying>

@property (nonatomic) unsigned long long deliveryTimestamp;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) struct __IOHIDEvent { } *hidEvent;
@property (readonly, nonatomic) NSArray *preActions;

+ (id)eventWithHIDEvent:(struct __IOHIDEvent { } *)a0 deliveryTimeStamp:(unsigned long long)a1 senderProperties:(id)a2 preActions:(id)a3;
+ (id)eventWithHIDEvent:(struct __IOHIDEvent { } *)a0;
+ (id)eventWithHIDEvent:(struct __IOHIDEvent { } *)a0 deliveryTimeStamp:(unsigned long long)a1;

- (id)eventAdjustedForDeliveryTimeInterval:(double)a0 eventEnvironment:(id)a1;
- (id)initWithDeliveryTimeStamp:(unsigned long long)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
