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
- (id)_shippingName;
- (BOOL)hasShippingAddress;
- (BOOL)isShippingServiceableWithError:(id *)a0;
- (id)firstModelError;
- (unsigned long long)rawShippingType;
- (id)createShippingAddressErrorFromError:(id)a0;
- (BOOL)isClientError:(id)a0;
- (id)createRequiredShippingAddressError;
- (id)requiredShippingAddressErrorDescription;
- (id)requiredShippingAddressErrorFailureReason;
- (id)createIncompleteShippingAddressError;
- (id)incompleteShippingAddressErrorDescription;
- (id)incompleteShippingAddressErrorFailureReason;
- (id)createUnavailableShippingAddressError;
- (id)unavailableShippingAddressErrorDescription;
- (id)unavailableShippingAddressErrorFailureReason;
- (id)createShippingAddressErrorWithDescription:(id)a0 failureReason:(id)a1;

@end
