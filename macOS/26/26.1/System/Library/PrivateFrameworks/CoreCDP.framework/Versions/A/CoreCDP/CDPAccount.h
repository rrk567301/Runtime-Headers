@class NSString, NSDate;

@interface CDPAccount : NSObject <CDPProbationChecker>

@property (retain, nonatomic) NSDate *rpdProbationFirstSeenDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)saveVerifiedAccount:(id)a0 error:(id *)a1;
+ (BOOL)isICDPEnabledForDSID:(id)a0;
+ (BOOL)checkIfAltDSIDIsBeneficiary:(id)a0;
+ (BOOL)isHSA2Enabled:(id)a0;
+ (id)contextForAccountWithAltDSID:(id)a0;
+ (id)altDSIDForPersonID:(id)a0;
+ (id)appleAccountForAltDSID:(id)a0;
+ (id)_authKitAccountWith:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;
+ (id)personIDForAltDSID:(id)a0;

- (id)authToken;
- (id)primaryAccountAltDSID;
- (id)primaryAuthKitAccount;
- (BOOL)primaryAccountNeedsEscrowRecordRepair;
- (id)primaryAppleAccount;
- (BOOL)rpdProbationIsInEffectForDuration:(double)a0 context:(id)a1;
- (id)iCloudEnv;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)primaryAccountFullName;
- (id)escrowURL;
- (id)primaryAccountStashedPRK;
- (id)primaryAccountFirstName;
- (BOOL)isOTEnabledForContext:(id)a0;
- (id)_serverFriendlyDateFormatter;
- (BOOL)primaryAccountIsBeneficiary;
- (void)octagonStatusForContext:(id)a0 withCompletion:(id /* block */)a1;
- (id)primaryAccountUsername;
- (id)primaryAccountDSID;
- (void)sosStatusForContext:(id)a0 withCompletion:(id /* block */)a1;
- (id)contextForPrimaryAccount;

@end
