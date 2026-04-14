@class NSString, NSDate;

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime

@property (readonly, copy) NSString *eventUniqueID;
@property (readonly, copy) NSDate *occurrenceDate;
@property (readonly, getter=isOnlyDuringEvent) BOOL onlyDuringEvent;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithEventUniqueID:(id)a0 occurrenceDate:(id)a1 onlyDuringEvent:(BOOL)a2;
- (unsigned long long)lifetimeType;

@end
