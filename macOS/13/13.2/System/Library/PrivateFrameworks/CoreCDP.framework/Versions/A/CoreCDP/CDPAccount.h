@class NSDate;

@interface CDPAccount : NSObject

@property (retain, nonatomic) NSDate *rpdProbationFirstSeenDate;

+ (id)sharedInstance;
+ (BOOL)saveVerifiedAccount:(id)a0 error:(id *)a1;
+ (BOOL)isICDPEnabledForDSID:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;
+ (id)_authKitAccountWith:(id)a0;
+ (BOOL)checkIfAltDSIDIsBeneficiary:(id)a0;
+ (id)appleAccountForAltDSID:(id)a0;
+ (id)personIDForAltDSID:(id)a0;
+ (id)altDSIDForPersonID:(id)a0;
+ (id)contextForAccountWithAltDSID:(id)a0;
+ (BOOL)isHSA2Enabled:(id)a0;
+ (id)cdpContextForUsername:(id)a0;

- (id)authToken;
- (BOOL)isOTEnabledForContext:(id)a0;
- (id)primaryAuthKitAccount;
- (id)primaryAppleAccount;
- (id)primaryAccountUsername;
- (id)primaryAccountDSID;
- (id)primaryAccountAltDSID;
- (unsigned long long)primaryAccountSecurityLevel;
- (BOOL)primaryAccountIsBeneficiary;
- (id)escrowURL;
- (id)iCloudEnv;
- (id)contextForPrimaryAccount;
- (id)primaryAccountFirstName;
- (id)primaryAccountFullName;
- (id)primaryAccountStashedPRK;
- (BOOL)primaryAccountNeedsEscrowRecordRepair;
- (id)_serverFriendlyDateFormatter;
- (BOOL)rpdProbationIsInEffectForDuration:(double)a0;

@end
