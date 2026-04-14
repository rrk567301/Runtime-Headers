@class NSString, NSDate;

@interface LogQuantityIntent : INIntent

@property (nonatomic, copy) NSString *quantityIdentifier;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSDate *end;
@property (nonatomic) double value;
@property (nonatomic, copy) NSString *units;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
