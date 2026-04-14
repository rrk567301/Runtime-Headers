@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *phone;
@property (readonly, nonatomic) NSString *name;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;
- (long long)context;
- (id)errors;
- (id)errorsForContactFields:(id)a0;
- (id)paymentContactFormatErrors;
- (id)requiredContactFields;

@end
