@class NSDateInterval;

@interface DNDModeAssertionDateIntervalLifetime : DNDModeAssertionLifetime

@property (readonly, copy) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithDateInterval:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isActiveForDate:(id)a0;
- (unsigned long long)lifetimeType;

@end
