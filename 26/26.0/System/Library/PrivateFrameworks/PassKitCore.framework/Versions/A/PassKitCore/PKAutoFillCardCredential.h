@class NSString, CNContact, NSDateFormatter, NSDate;

@interface PKAutoFillCardCredential : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    NSDateFormatter *_expirationDateFormatter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *cardholderName;
@property (readonly, copy, nonatomic) NSString *primaryAccountNumber;
@property (readonly, copy, nonatomic) NSString *expiration;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *securityCode;
@property (readonly, copy, nonatomic) CNContact *billingAddress;

- (id)_init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setExpirationDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_copyInto:(id)a0 zone:(struct _NSZone { } *)a1;
- (id)initWithVirtualCard:(id)a0 credential:(id)a1;
- (void)_setBillingAddress:(id)a0;
- (void)_setCardholderName:(id)a0;
- (void)_setPrimaryAccountNumber:(id)a0;
- (void)_setSecurityCode:(id)a0;
- (id)initWithCardholderName:(id)a0 pan:(id)a1 expiration:(id)a2 securityCode:(id)a3 billingAddress:(id)a4;
- (id)initWithCardholderName:(id)a0 pan:(id)a1 expirationDate:(id)a2 securityCode:(id)a3 billingAddress:(id)a4;
- (BOOL)isEqualToFPANCardCredential:(id)a0;

@end
