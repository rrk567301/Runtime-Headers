@class REMStructuredLocation;

@interface REMAlarmLocationTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) REMStructuredLocation *structuredLocation;
@property (nonatomic) long long proximity;

+ (id)cdEntityName;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_deepCopy;
- (id)initWithStructuredLocation:(id)a0 proximity:(long long)a1;
- (char)isContentEqual:(id)a0;
- (id)initWithObjectID:(id)a0 structuredLocation:(id)a1 proximity:(long long)a2;
- (char)isTemporal;

@end
