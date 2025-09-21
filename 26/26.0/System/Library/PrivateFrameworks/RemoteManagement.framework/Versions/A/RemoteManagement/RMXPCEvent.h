@class NSString, NSDictionary;

@interface RMXPCEvent : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *streamName;
@property (readonly, nonatomic) NSString *notificationName;
@property (readonly, nonatomic) NSDictionary *descriptor;
@property (readonly, nonatomic) NSString *eventKey;

+ (id)eventKeyForStream:(id)a0 notificationName:(id)a1;
+ (id)newXPCEventForDarwinNotification:(id)a0;
+ (id)newXPCEventForDistributedNotification:(id)a0;
+ (id)newXPCEventForStream:(id)a0 notificationName:(id)a1 descriptor:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToEvent:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStreamName:(id)a0 notificationName:(id)a1 descriptor:(id)a2;

@end
