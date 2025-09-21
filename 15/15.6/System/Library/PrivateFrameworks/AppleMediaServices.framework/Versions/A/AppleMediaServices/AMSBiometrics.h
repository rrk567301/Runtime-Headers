@class NSArray;

@interface AMSBiometrics : NSObject

@property (class, readonly, copy) NSArray *identityMap;
@property (class, readonly) long long deviceState;
@property (class, readonly, getter=isIdentityMapValid) char identityMapValid;
@property (class, readonly) long long type;

+ (void)setDeviceState:(long long)a0;
+ (id)ACLVersionForAccessControl:(struct __SecAccessControl { } *)a0;
+ (id)ACLVersionForConstraints:(id)a0;
+ (id)ACLVersionForAccount:(id)a0 options:(id)a1 error:(id *)a2;
+ (void)saveIdentityMap;
+ (char)_deleteKeysWithOptions:(id)a0 error:(id *)a1;
+ (char)_shouldAddBiometricHeader;
+ (id)_stateHeaderValueForAccount:(id)a0;
+ (char)deleteAllKeysWithError:(id *)a0;
+ (char)deleteKeysWithError:(id *)a0;
+ (id)disableForAccount:(id)a0;
+ (id)handleResponse:(id)a0 financeResponse:(id)a1 session:(id)a2 taskInfo:(id)a3;
+ (char)hasKeysForAccount:(id)a0 forSignaturePurpose:(unsigned long long)a1 withError:(id *)a2;
+ (id)headersWithAccount:(id)a0 options:(id)a1 signatureResult:(id)a2;
+ (char)isActionSupported:(long long)a0 withAccessControl:(struct __SecAccessControl { } *)a1;
+ (char)isActionSupported:(long long)a0 withConstraints:(id)a1;
+ (char)isActionSupportedForType:(long long)a0 account:(id)a1 options:(id)a2 error:(id *)a3;
+ (char)isAvailableForAccount:(id)a0;
+ (char)isDeviceInBiometricLockout;
+ (id)minimumACLVersionForAction:(long long)a0;
+ (char)proxyDeleteAllKeysWithError:(id *)a0;
+ (id)resumptionHeadersFromRequest:(id)a0;
+ (id)setState:(long long)a0 forAccount:(id)a1;
+ (id)signAndReturnChallenge:(id)a0 withAccount:(id)a1 clientInfo:(id)a2 options:(id)a3;
+ (id)signChallenge:(id)a0 withAccount:(id)a1 clientInfo:(id)a2 options:(id)a3;
+ (long long)stateForAccount:(id)a0;

@end
