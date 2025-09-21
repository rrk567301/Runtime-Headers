@class NSData, NSString, AMSDelegatePurchaseRequest, CPSSystemAuthenticationRequest, CPSRestrictedAccessRequest, CPSTVProviderRequest, NSDictionary, PKPaymentRequest, ACAccount, CPSStoreAuthenticationRequest;

@interface CPSViewServicePresentationContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) AMSDelegatePurchaseRequest *delegatePurchaseRequest;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) NSDictionary *paymentContext;
@property (retain, nonatomic) ACAccount *storeAccount;
@property (retain, nonatomic) CPSSystemAuthenticationRequest *systemAuthenticationRequest;
@property (retain, nonatomic) NSData *sharingData;
@property (retain, nonatomic) CPSRestrictedAccessRequest *restrictedAccessRequest;
@property (retain, nonatomic) CPSStoreAuthenticationRequest *storeAuthenticationRequest;
@property (retain, nonatomic) CPSTVProviderRequest *tvProviderRequest;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
