@class NSString, PKPaymentProvisioningResponse, NSData, PKPaymentRequirementsResponse, PKPaymentEligibilityResponse;

@interface PKSecureElementProvisioningState : NSObject <NSSecureCoding> {
    NSString *_nonce;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sid;
@property (retain, nonatomic) NSData *externalizedAuth;
@property (retain, nonatomic) NSString *secureElementReservationGroupIdentifier;
@property (retain, nonatomic) NSString *referrerIdentifier;
@property (nonatomic) BOOL hasAcquiredProvisioningAssertion;
@property (retain, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) NSData *provisioningStepState;
@property (retain, nonatomic) PKPaymentRequirementsResponse *requirementsResponse;
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;
@property (retain, nonatomic) PKPaymentProvisioningResponse *provisioningResponse;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)setNonce:(id)a0;
- (id)createDivergentStateClaimNonce:(BOOL)a0;
- (id)createDivergentState;
- (BOOL)hasNonce;
- (id)useNonce;

@end
