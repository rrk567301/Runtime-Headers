@class NSString;

@interface LunarDateComplicationConfigurationIntent : INIntent

@property (nonatomic, copy) NSString *overlayCalendarID;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
