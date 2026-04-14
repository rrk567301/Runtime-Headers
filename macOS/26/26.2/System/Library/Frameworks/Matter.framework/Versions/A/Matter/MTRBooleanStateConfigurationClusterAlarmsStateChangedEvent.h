@class NSNumber;

@interface MTRBooleanStateConfigurationClusterAlarmsStateChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *alarmsActive;
@property (copy, nonatomic) NSNumber *alarmsSuppressed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
