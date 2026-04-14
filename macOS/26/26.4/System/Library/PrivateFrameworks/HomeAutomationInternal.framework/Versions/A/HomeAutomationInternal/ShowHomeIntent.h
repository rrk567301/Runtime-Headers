@class NSArray, INDateComponentsRange;

@interface ShowHomeIntent : INIntent

@property (nonatomic, copy) NSArray *filters;
@property (nonatomic, retain) INDateComponentsRange *dateTimeRange;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
