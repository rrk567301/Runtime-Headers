@class NSString, NSDate;

@interface GetHealthQuantityIntent : INIntent

@property (nonatomic, copy) NSString *quantityIdentifier;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSDate *end;
@property (nonatomic, copy) NSString *unit;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
