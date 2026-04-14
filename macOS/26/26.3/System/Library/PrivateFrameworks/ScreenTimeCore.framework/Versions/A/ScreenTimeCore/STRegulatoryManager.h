@protocol STOSEligibilityProviding;

@interface STRegulatoryManager : NSObject <STRegulatoryManagerProtocol>

@property (nonatomic, readonly) id<STOSEligibilityProviding> eligibilityProvider;

+ (id)create;
+ (id)createWithEligibilityProvider:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEligibilityProvider:(id)a0;
- (id)isCommunicationSafetyForcedToEnabledForFamilyMemberType:(id)a0 error:(id *)a1;
- (id)isCommunicationSafetyForcedToEnabledForFamilyMemberTypeOptional:(id)a0 error:(id *)a1;
- (id)isCommunicationSafetyForcedToEnabledForPersistenceController:(id)a0 error:(id *)a1;
- (id)isParentSignInRequiredForCommunicationSafetyForPersistenceController:(id)a0 error:(id *)a1;
- (id)isParentSignInRequiredForWebContentFilterForPersistenceController:(id)a0 error:(id *)a1;
- (id)isWebContentFilterForcedToLimitAdultWebsitesForFamilyMemberType:(id)a0 error:(id *)a1;
- (id)isWebContentFilterForcedToLimitAdultWebsitesForFamilyMemberTypeOptional:(id)a0 error:(id *)a1;
- (id)isWebContentFilterForcedToLimitAdultWebsitesForPersistenceController:(id)a0 error:(id *)a1;
- (id)regionAndReturnError:(id *)a0;
- (id)regionsAndReturnError:(id *)a0;
- (void)revokeAccessDataForAccountDSID:(id)a0 persistenceController:(id)a1 completionHandler:(id /* block */)a2;

@end
