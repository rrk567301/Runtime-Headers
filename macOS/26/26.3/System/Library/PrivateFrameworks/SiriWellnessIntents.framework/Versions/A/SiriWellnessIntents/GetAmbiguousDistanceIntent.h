@class NSDate;

@interface GetAmbiguousDistanceIntent : INIntent

@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSDate *endDate;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
