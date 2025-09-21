@class NSString, PKPaymentProvisioningResponse, NSData, PKPaymentRequirementsResponse, PKPaymentEligibilityResponse;

@interface PKSecureElementProvisioningState : NSObject <NSSecureCoding> {
    NSString *_nonce;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *sid;
@property (retain, nonatomic) NSData *externalizedAuth;
@property (retain, nonatomic) NSString *secureElementReservationGroupIdentifier;
@property (retain, nonatomic) NSString *referrerIdentifier;
@property (retain, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) NSData *provisioningStepState;
@property (retain, nonatomic) PKPaymentRequirementsResponse *requirementsResponse;
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;
@property (retain, nonatomic) PKPaymentProvisioningResponse *provisioningResponse;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)setNonce:(id)a0;
- (id)createDivergentStateClaimNonce:(char)a0;
- (id)createDivergentState;
- (char)hasNonce;
- (id)useNonce;

@end
