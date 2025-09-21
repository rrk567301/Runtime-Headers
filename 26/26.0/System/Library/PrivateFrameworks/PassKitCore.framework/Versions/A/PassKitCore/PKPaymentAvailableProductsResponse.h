@class NSArray, NSNumber, NSDate;

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSArray *availableProducts;
@property (readonly, nonatomic) NSDate *expiry;
@property (readonly, nonatomic) NSNumber *timestamp;

- (BOOL)supportsSecureCoding;
- (void).cxx_destruct;

@end
