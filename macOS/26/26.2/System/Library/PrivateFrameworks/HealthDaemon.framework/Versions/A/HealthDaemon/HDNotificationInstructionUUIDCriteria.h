@class NSUUID;

@interface HDNotificationInstructionUUIDCriteria : HDNotificationInstructionCriteria

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (BOOL)supportsSecureCoding;

- (id)initWithUUID:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)messageDictionary;
- (id)initWithMessageDictionary:(id)a0;
- (id)codableCriteria;
- (id)initWithCodableNotificationInstructionCriteria:(id)a0;

@end
