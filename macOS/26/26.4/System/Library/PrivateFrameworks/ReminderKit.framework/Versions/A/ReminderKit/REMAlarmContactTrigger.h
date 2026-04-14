@class REMContactRepresentation;

@interface REMAlarmContactTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMContactRepresentation *contactRepresentation;

+ (id)cdEntityName;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)_deepCopy;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithContactRepresentation:(id)a0;
- (id)initWithObjectID:(id)a0 contactRepresentation:(id)a1;
- (BOOL)isTemporal;

@end
