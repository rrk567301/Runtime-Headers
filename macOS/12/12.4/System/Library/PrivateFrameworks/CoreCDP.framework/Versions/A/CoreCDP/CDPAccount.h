@interface CDPAccount : NSObject

+ (id)sharedInstance;
+ (BOOL)isICDPEnabledForDSID:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;

- (id)authToken;
- (id)primaryAppleAccount;
- (id)contextForPrimaryAccount;
- (id)primaryAccountAltDSID;
- (id)primaryAccountDSID;
- (id)primaryAccountUsername;
- (BOOL)primaryAccountIsBeneficiary;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)escrowURL;
- (id)iCloudEnv;
- (id)primaryAccountFirstName;
- (id)primaryAccountFullName;
- (id)primaryAccountStashedPRK;

@end
