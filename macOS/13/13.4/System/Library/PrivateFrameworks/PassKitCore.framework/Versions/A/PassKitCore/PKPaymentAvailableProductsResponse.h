@class NSArray, NSDate;

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSArray *availableProducts;
@property (readonly, nonatomic) NSDate *expiry;

- (void).cxx_destruct;
- (BOOL)supportsSecureCoding;

@end
