@class REMContactRepresentation;

@interface REMAlarmContactTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMContactRepresentation *contactRepresentation;

+ (id)cdEntityName;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_deepCopy;
- (BOOL)isTemporal;
- (id)initWithObjectID:(id)a0 contactRepresentation:(id)a1;
- (id)initWithContactRepresentation:(id)a0;

@end
