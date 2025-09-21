@interface REMAlarmVehicleTrigger : REMAlarmTrigger

@property (nonatomic) long long event;

+ (char)supportsSecureCoding;
+ (id)cdEntityName;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEvent:(long long)a0;
- (id)_deepCopy;
- (id)initWithObjectID:(id)a0 event:(long long)a1;
- (char)isTemporal;

@end
