@class NSString, NSURL;

@interface PKPaymentOfferActionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSString *provisioningCredentialIdentifier;
@property (readonly, nonatomic) NSURL *provisioningCardIconURL;
@property (readonly, nonatomic) BOOL didSelectOffer;

+ (id)paymentOfferActionResultFromQueryItems:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0 provisioningCredentialIdentifier:(id)a1 provisioningCardIconURL:(id)a2 didSelectOffer:(BOOL)a3;

@end
