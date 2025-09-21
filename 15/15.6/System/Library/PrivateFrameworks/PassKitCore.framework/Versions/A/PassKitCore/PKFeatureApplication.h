@class PKFeatureApplicationDeclineDetails, NSString, NSData, PKFeatureApplicationOfferDetails, NSDate, NSURL, PKFeatureApplicationInvitationDetails;

@interface PKFeatureApplication : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) unsigned long long featureProduct;
@property (nonatomic) long long applicationType;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (nonatomic) long long updateUserInfoSubType;
@property (nonatomic) unsigned long long applicationState;
@property (nonatomic) unsigned long long applicationStateReason;
@property (retain, nonatomic) PKFeatureApplicationOfferDetails *applicationOfferDetails;
@property (retain, nonatomic) PKFeatureApplicationDeclineDetails *declineDetails;
@property (copy, nonatomic) NSString *applicationTermsIdentifier;
@property (nonatomic) char applicationStateDirty;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSURL *applicationBaseURL;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (copy, nonatomic) NSString *coreIDVServiceProviderName;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) PKFeatureApplicationInvitationDetails *invitationDetails;
@property (copy, nonatomic) NSString *preliminaryAssessmentIdentifier;
@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) char supportsAuthentication;
@property (readonly, nonatomic) NSData *authenticationSignaturePayload;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)hasSufficientOTBForInstallmentConfiguration:(id)a0;

@end
