@class NSData, NSString, NSURL, NSArray, NSSet, PKPaymentEligibilityFIDOProfile, NSDictionary, PKPaymentEligibilitySupplementaryData;

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse {
    NSSet *_enableRequirements;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long eligibilityStatus;
@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) unsigned long long deviceProvisioningDataExpected;
@property (readonly, copy, nonatomic) NSURL *termsURL;
@property (readonly, copy, nonatomic) NSString *termsID;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *region;
@property (readonly, copy, nonatomic) NSString *nonce;
@property (readonly, copy, nonatomic) NSURL *learnMoreURL;
@property (readonly, copy, nonatomic) PKPaymentEligibilitySupplementaryData *supplementaryData;
@property (readonly, copy, nonatomic) NSArray *requiredPaymentSetupFields;
@property (readonly, copy, nonatomic) PKPaymentEligibilityFIDOProfile *fidoProfile;
@property (readonly, copy, nonatomic) NSData *fidoChallenge;
@property (readonly, copy, nonatomic) NSDictionary *transactionKeyInformation;
@property (readonly, nonatomic) NSArray *auxiliaryCapabilityDecryptions;
@property (readonly, nonatomic) NSArray *auxiliaryCapabilitySignatures;
@property (readonly, copy, nonatomic) NSString *credentialAuthorityIdentifier;
@property (readonly, nonatomic) BOOL hasEnableRequirements;
@property (readonly, nonatomic) BOOL shouldGenerateFidoKey;
@property (readonly, nonatomic) BOOL shouldSignFidoChallenge;
@property (readonly, nonatomic) BOOL shouldGenerateISO18013EncryptionKey;
@property (readonly, nonatomic) BOOL shouldGenerateTransactionKey;
@property (readonly, nonatomic) BOOL shouldGenerateLongTermPrivacyKey;
@property (readonly, nonatomic) BOOL shouldGenerateAuxiliaryCapabilities;
@property (readonly, nonatomic) char supportsVirtualCardNumber;
@property (readonly, copy, nonatomic) NSString *fpanIdentifier;
@property (readonly, copy, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (readonly, nonatomic) long long supersededBy;
@property (readonly, copy, nonatomic) NSString *dpanIdentifier;
@property (readonly, nonatomic) NSArray *paymentApplications;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
