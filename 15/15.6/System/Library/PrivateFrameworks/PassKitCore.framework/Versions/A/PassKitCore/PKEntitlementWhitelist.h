@class NSString, NSArray;

@interface PKEntitlementWhitelist : NSObject {
    int _processIdentifier;
    char _carKeyCredentialProvisioning;
}

@property (readonly) char passesAllAccess;
@property (readonly) char passesOverviewAccess;
@property (readonly) char passesEntangledAccess;
@property (readonly) char passesAddSilently;
@property (readonly) char passesAddUnsigned;
@property (readonly) char passPresentationSuppression;
@property (readonly) char passPresentationSuppressionFromBackground;
@property (readonly) char paymentAllAccess;
@property (readonly) char paymentConfiguration;
@property (readonly) char paymentPresentation;
@property (readonly) char applePayTrustAllAccess;
@property (readonly) char inAppPayments;
@property (readonly) char inAppPaymentsPrivate;
@property (readonly) char webPayments;
@property (readonly) char winterpegPayments;
@property (readonly) char cardOnFilePayments;
@property (readonly) char AMPCardEnrollment;
@property (readonly) char externalizedContextPayments;
@property (readonly) char trustedDeviceEnrollmentInfo;
@property (readonly) char peerPaymentAllAccess;
@property (readonly) char featuresAllAccess;
@property (readonly) char searchAllAccess;
@property (readonly) char secureElementPassProvisioning;
@property (readonly) char secureElementPassProvisioningForMAIDs;
@property (readonly) char paymentPassProvisioning;
@property (readonly) char sharingAllAccess;
@property (readonly) char appleMediaServicesPrivate;
@property (readonly) char carKeyPassThroughAccess;
@property (readonly) char generateSecurePassData;
@property (readonly) char payLaterPayInFourMerchandising;
@property (readonly) char badgeCountItemsAccess;
@property (readonly) char remoteNetworkPaymentInitiate;
@property (readonly) char credentialStateAccess;
@property (readonly) char shareableCredentialProvisioning;
@property (readonly) char carKeyCredentialProvisioning;
@property (readonly, copy) NSString *applicationID;
@property (readonly, copy) NSString *developerTeamID;
@property (readonly, copy) NSArray *merchantIdentifiers;
@property (readonly, copy) NSArray *teamIDs;
@property (readonly, copy) NSArray *passTypeIDs;
@property (readonly, copy) NSArray *passTypeIDPrefixes;
@property (readonly) char supportsWebPayments;
@property (readonly) char allAccess;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)_arrayValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (char)_boolValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (void *)_copyValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (BOOL)_probeEntitlementsWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_stringValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (char)entitledToPerformPassAction:(unsigned long long)a0 pass:(id)a1;
- (char)entitledToPerformPassAction:(unsigned long long)a0 passTypeID:(id)a1 teamID:(id)a2 associatedPassTypeIdentifiers:(id)a3 associatedApplicationIdentifiers:(id)a4;
- (id)initWithProcessIdentifier:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (char)isEntitledForAnyFromUniquePassTypeIDs:(id)a0;
- (char)isEntitledForMerchantSession:(id)a0;
- (char)isEntitledForPassTypeID:(id)a0;
- (char)isEntitledForPaymentRequest:(id)a0;

@end
