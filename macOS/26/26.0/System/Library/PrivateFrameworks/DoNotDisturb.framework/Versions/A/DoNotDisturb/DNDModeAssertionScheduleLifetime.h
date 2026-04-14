@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime

@property (readonly, copy) NSString *scheduleIdentifier;
@property (readonly) unsigned long long behavior;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithScheduleIdentifier:(id)a0 behavior:(unsigned long long)a1;
- (unsigned long long)lifetimeType;

@end
