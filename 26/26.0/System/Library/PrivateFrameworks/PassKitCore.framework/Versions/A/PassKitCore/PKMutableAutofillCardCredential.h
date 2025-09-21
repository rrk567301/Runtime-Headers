@class NSString, CNContact, NSDate;

@interface PKMutableAutofillCardCredential : PKAutoFillCardCredential

@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *securityCode;
@property (copy, nonatomic) CNContact *billingAddress;

- (void)setExpirationDate:(id)a0;
- (void)setSecurityCode:(id)a0;
- (void)setBillingAddress:(id)a0;
- (void)setCardholderName:(id)a0;
- (void)setPrimaryAccountNumber:(id)a0;

@end
