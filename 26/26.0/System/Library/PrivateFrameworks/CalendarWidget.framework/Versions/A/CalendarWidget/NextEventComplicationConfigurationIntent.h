@class NSNumber, NSArray;

@interface NextEventComplicationConfigurationIntent : INIntent

@property (nonatomic, retain) NSNumber *mirrorCalendarApp;
@property (nonatomic, copy) NSArray *calendars;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
