@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime

@property (readonly, copy) NSString *scheduleIdentifier;
@property (readonly) unsigned long long behavior;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)lifetimeType;
- (id)initWithScheduleIdentifier:(id)a0 behavior:(unsigned long long)a1;

@end
