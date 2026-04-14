@interface REMAlarmVehicleTrigger : REMAlarmTrigger

@property (nonatomic) long long event;

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;

- (id)initWithEvent:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_deepCopy;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0 event:(long long)a1;
- (BOOL)isTemporal;

@end
