@class NSString, NSAttributedString, CNContact;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSAttributedString *formattedAddressString;
@property (readonly, nonatomic) CNContact *shippingAddress;
@property (readonly, nonatomic) NSString *shippingType;
@property (readonly, nonatomic) BOOL isShippingEditable;

+ (long long)dataType;

- (long long)context;
- (id)validate;
- (id)errors;
- (BOOL)isValidWithError:(id *)a0;
- (id)paymentContactFormatErrors;
- (BOOL)hasShippingAddress;
- (id)firstModelError;
- (id)createShippingAddressErrorFromError:(id)a0;
- (id)createRequiredShippingAddressError;
- (id)createIncompleteShippingAddressError;
- (id)_shippingName;
- (BOOL)isShippingServiceableWithError:(id *)a0;
- (BOOL)isClientError:(id)a0;
- (id)incompleteShippingAddressErrorDescription;
- (id)createShippingAddressErrorWithDescription:(id)a0 failureReason:(id)a1;
- (id)createUnavailableShippingAddressError;
- (id)requiredShippingAddressErrorDescription;
- (id)requiredShippingAddressErrorFailureReason;
- (unsigned long long)rawShippingType;
- (id)incompleteShippingAddressErrorFailureReason;
- (id)unavailableShippingAddressErrorDescription;
- (id)unavailableShippingAddressErrorFailureReason;

@end
