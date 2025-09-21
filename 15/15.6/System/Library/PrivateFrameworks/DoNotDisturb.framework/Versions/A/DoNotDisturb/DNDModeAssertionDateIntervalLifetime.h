@class NSDateInterval;

@interface DNDModeAssertionDateIntervalLifetime : DNDModeAssertionLifetime

@property (readonly, copy) NSDateInterval *dateInterval;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0;
- (char)isActiveForDate:(id)a0;
- (unsigned long long)lifetimeType;

@end
