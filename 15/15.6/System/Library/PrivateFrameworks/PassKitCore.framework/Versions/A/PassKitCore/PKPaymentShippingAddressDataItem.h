@class NSString, NSAttributedString, CNContact;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSAttributedString *formattedAddressString;
@property (readonly, nonatomic) CNContact *shippingAddress;
@property (readonly, nonatomic) NSString *shippingType;
@property (readonly, nonatomic) char isShippingEditable;

+ (long long)dataType;

- (long long)context;
- (id)validate;
- (id)errors;
- (char)isValidWithError:(id *)a0;
- (id)firstModelError;
- (char)isShippingServiceableWithError:(id *)a0;
- (unsigned long long)rawShippingType;
- (id)_shippingName;
- (id)createIncompleteShippingAddressError;
- (id)createRequiredShippingAddressError;
- (id)createShippingAddressErrorFromError:(id)a0;
- (id)createShippingAddressErrorWithDescription:(id)a0 failureReason:(id)a1;
- (id)createUnavailableShippingAddressError;
- (char)hasShippingAddress;
- (id)incompleteShippingAddressErrorDescription;
- (id)incompleteShippingAddressErrorFailureReason;
- (char)isClientError:(id)a0;
- (id)paymentContactFormatErrors;
- (id)requiredShippingAddressErrorDescription;
- (id)requiredShippingAddressErrorFailureReason;
- (id)unavailableShippingAddressErrorDescription;
- (id)unavailableShippingAddressErrorFailureReason;

@end
