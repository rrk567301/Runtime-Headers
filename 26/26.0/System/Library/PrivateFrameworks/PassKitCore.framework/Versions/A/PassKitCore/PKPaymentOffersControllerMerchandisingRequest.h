@class NSSet, NSDecimalNumber;

@interface PKPaymentOffersControllerMerchandisingRequest : NSObject

@property (readonly, copy, nonatomic) NSSet *merchandisingIdentifiers;
@property (readonly, copy, nonatomic) NSDecimalNumber *amount;

- (id)description;
- (void).cxx_destruct;
- (BOOL)coalesceWithRequest:(id)a0;
- (id)initWithMerchandisingIdentifiers:(id)a0 amount:(id)a1;

@end
