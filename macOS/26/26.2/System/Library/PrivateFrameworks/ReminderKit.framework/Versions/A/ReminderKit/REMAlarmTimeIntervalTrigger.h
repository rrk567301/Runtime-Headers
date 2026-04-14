@interface REMAlarmTimeIntervalTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timeInterval;

+ (id)cdEntityName;

- (id)_deepCopy;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimeInterval:(double)a0;
- (id)description;
- (id)initWithObjectID:(id)a0 timeInterval:(double)a1;
- (BOOL)isTemporal;

@end
