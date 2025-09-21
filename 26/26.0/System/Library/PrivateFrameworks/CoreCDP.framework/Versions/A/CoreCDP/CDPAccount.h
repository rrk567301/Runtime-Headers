@class NSString, NSDate;

@interface CDPAccount : NSObject <CDPProbationChecker>

@property (retain, nonatomic) NSDate *rpdProbationFirstSeenDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)personIDForAltDSID:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0;
+ (BOOL)checkIfAltDSIDIsBeneficiary:(id)a0;
+ (id)_authKitAccountWith:(id)a0;
+ (id)appleAccountForAltDSID:(id)a0;
+ (id)altDSIDForPersonID:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;
+ (BOOL)saveVerifiedAccount:(id)a0 error:(id *)a1;
+ (id)contextForAccountWithAltDSID:(id)a0;
+ (BOOL)isHSA2Enabled:(id)a0;

- (id)authToken;
- (void)sosStatusForContext:(id)a0 withCompletion:(id /* block */)a1;
- (id)primaryAppleAccount;
- (id)primaryAccountUsername;
- (id)primaryAuthKitAccount;
- (id)primaryAccountFullName;
- (id)_serverFriendlyDateFormatter;
- (id)primaryAccountFirstName;
- (BOOL)isOTEnabledForContext:(id)a0;
- (void)octagonStatusForContext:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)primaryAccountNeedsEscrowRecordRepair;
- (id)escrowURL;
- (BOOL)primaryAccountIsBeneficiary;
- (id)primaryAccountDSID;
- (id)primaryAccountStashedPRK;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)primaryAccountAltDSID;
- (id)contextForPrimaryAccount;
- (BOOL)rpdProbationIsInEffectForDuration:(double)a0 context:(id)a1;
- (id)iCloudEnv;

@end
