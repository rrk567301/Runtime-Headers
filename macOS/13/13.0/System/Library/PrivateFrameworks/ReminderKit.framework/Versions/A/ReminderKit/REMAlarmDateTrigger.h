@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *dateComponents;

+ (id)cdEntityName;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_deepCopy;
- (id)initWithDateComponents:(id)a0;
- (BOOL)isTemporal;
- (id)initWithObjectID:(id)a0 dateComponents:(id)a1;

@end
