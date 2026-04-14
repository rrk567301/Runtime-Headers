@class NSString, NSDate;

@interface CDPAccount : NSObject <CDPProbationChecker>

@property (retain, nonatomic) NSDate *rpdProbationFirstSeenDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_authKitAccountWith:(id)a0;
+ (id)altDSIDForPersonID:(id)a0;
+ (BOOL)checkIfAltDSIDIsBeneficiary:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0;
+ (BOOL)isHSA2Enabled:(id)a0;
+ (BOOL)saveVerifiedAccount:(id)a0 error:(id *)a1;
+ (id)personIDForAltDSID:(id)a0;
+ (id)appleAccountForAltDSID:(id)a0;
+ (id)contextForAccountWithAltDSID:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;

- (id)authToken;
- (id)primaryAccountFirstName;
- (BOOL)rpdProbationIsInEffectForDuration:(double)a0 context:(id)a1;
- (void)octagonStatusForContext:(id)a0 withCompletion:(id /* block */)a1;
- (id)contextForPrimaryAccount;
- (id)escrowURL;
- (void)sosStatusForContext:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)primaryAccountIsBeneficiary;
- (BOOL)isOTEnabledForContext:(id)a0;
- (id)primaryAccountDSID;
- (id)primaryAccountFullName;
- (id)primaryAuthKitAccount;
- (id)primaryAppleAccount;
- (BOOL)primaryAccountNeedsEscrowRecordRepair;
- (id)primaryAccountUsername;
- (id)primaryAccountAltDSID;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)_serverFriendlyDateFormatter;
- (id)iCloudEnv;
- (id)primaryAccountStashedPRK;

@end
