@class NSDateInterval;

@interface DNDModeAssertionDateIntervalLifetime : DNDModeAssertionLifetime

@property (readonly, copy) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0;
- (BOOL)isActiveForDate:(id)a0;
- (unsigned long long)lifetimeType;

@end
