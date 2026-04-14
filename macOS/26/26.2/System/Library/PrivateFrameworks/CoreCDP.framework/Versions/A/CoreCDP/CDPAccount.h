@class NSString, NSDate;

@interface CDPAccount : NSObject <CDPProbationChecker>

@property (retain, nonatomic) NSDate *rpdProbationFirstSeenDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)saveVerifiedAccount:(id)a0 error:(id *)a1;
+ (id)appleAccountForAltDSID:(id)a0;
+ (id)_authKitAccountWith:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0;
+ (id)personIDForAltDSID:(id)a0;
+ (BOOL)checkIfAltDSIDIsBeneficiary:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;
+ (id)altDSIDForPersonID:(id)a0;
+ (id)contextForAccountWithAltDSID:(id)a0;
+ (BOOL)isHSA2Enabled:(id)a0;

- (id)authToken;
- (id)_serverFriendlyDateFormatter;
- (BOOL)isOTEnabledForContext:(id)a0;
- (id)primaryAccountUsername;
- (id)primaryAuthKitAccount;
- (id)primaryAccountFirstName;
- (id)primaryAccountStashedPRK;
- (id)iCloudEnv;
- (void)octagonStatusForContext:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)rpdProbationIsInEffectForDuration:(double)a0 context:(id)a1;
- (BOOL)primaryAccountNeedsEscrowRecordRepair;
- (id)primaryAppleAccount;
- (id)primaryAccountAltDSID;
- (id)primaryAccountDSID;
- (id)primaryAccountFullName;
- (void)sosStatusForContext:(id)a0 withCompletion:(id /* block */)a1;
- (id)escrowURL;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)contextForPrimaryAccount;
- (BOOL)primaryAccountIsBeneficiary;

@end
