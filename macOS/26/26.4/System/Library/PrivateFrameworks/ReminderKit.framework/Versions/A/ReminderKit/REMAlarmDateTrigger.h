@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *dateComponents;

+ (id)cdEntityName;

- (id)initWithDateComponents:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)_deepCopy;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0 dateComponents:(id)a1;
- (BOOL)isTemporal;

@end
