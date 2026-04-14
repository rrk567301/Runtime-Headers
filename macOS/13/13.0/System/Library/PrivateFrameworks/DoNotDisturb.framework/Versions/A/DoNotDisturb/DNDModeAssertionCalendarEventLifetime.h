@class NSString, NSDate;

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime

@property (readonly, copy) NSString *eventUniqueID;
@property (readonly, copy) NSDate *occurrenceDate;
@property (readonly, getter=isOnlyDuringEvent) BOOL onlyDuringEvent;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)lifetimeType;
- (id)initWithEventUniqueID:(id)a0 occurrenceDate:(id)a1 onlyDuringEvent:(BOOL)a2;

@end
