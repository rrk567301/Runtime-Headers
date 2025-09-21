@class PKShippingMethod;

@interface PKPaymentShippingMethodDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKShippingMethod *shippingMethod;

+ (long long)dataType;

- (long long)context;
- (char)isValidWithError:(id *)a0;

@end
