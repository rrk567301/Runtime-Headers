@class NSString, NSDate;

@interface CDPAccount : NSObject <CDPProbationChecker>

@property (retain, nonatomic) NSDate *rpdProbationFirstSeenDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (char)saveVerifiedAccount:(id)a0 error:(id *)a1;
+ (id)contextForAccountWithAltDSID:(id)a0;
+ (char)isHSA2Enabled:(id)a0;
+ (char)isICDPEnabledForDSID:(id)a0;
+ (id)_authKitAccountWith:(id)a0;
+ (id)altDSIDForPersonID:(id)a0;
+ (id)appleAccountForAltDSID:(id)a0;
+ (char)checkIfAltDSIDIsBeneficiary:(id)a0;
+ (char)isICDPEnabledForDSID:(id)a0 checkWithServer:(char)a1;
+ (id)personIDForAltDSID:(id)a0;

- (id)authToken;
- (id)contextForPrimaryAccount;
- (char)isOTEnabledForContext:(id)a0;
- (id)primaryAuthKitAccount;
- (id)primaryAppleAccount;
- (id)_serverFriendlyDateFormatter;
- (id)escrowURL;
- (id)iCloudEnv;
- (void)octagonStatusForContext:(id)a0 withCompletion:(id /* block */)a1;
- (id)primaryAccountAltDSID;
- (id)primaryAccountDSID;
- (id)primaryAccountFirstName;
- (id)primaryAccountFullName;
- (char)primaryAccountIsBeneficiary;
- (char)primaryAccountNeedsEscrowRecordRepair;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)primaryAccountStashedPRK;
- (id)primaryAccountUsername;
- (char)rpdProbationIsInEffectForDuration:(double)a0 context:(id)a1;
- (void)sosStatusForContext:(id)a0 withCompletion:(id /* block */)a1;

@end
