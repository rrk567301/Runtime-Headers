@class NSString, NSDate;

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime

@property (readonly, copy) NSString *eventUniqueID;
@property (readonly, copy) NSDate *occurrenceDate;
@property (readonly, getter=isOnlyDuringEvent) char onlyDuringEvent;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventUniqueID:(id)a0 occurrenceDate:(id)a1 onlyDuringEvent:(char)a2;
- (unsigned long long)lifetimeType;

@end
