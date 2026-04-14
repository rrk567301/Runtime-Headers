@class NSArray;

@interface AMSBiometrics : NSObject

@property (class, readonly, copy) NSArray *identityMap;
@property (class, readonly) long long deviceState;
@property (class, readonly, getter=isIdentityMapValid) BOOL identityMapValid;
@property (class, readonly) long long type;

+ (id)minimumACLVersionForAction:(long long)a0;
+ (id)_stateHeaderValueForAccount:(id)a0;
+ (BOOL)isActionSupported:(long long)a0 withConstraints:(id)a1;
+ (BOOL)isActionSupported:(long long)a0 withAccessControl:(struct __SecAccessControl { } *)a1;
+ (id)setState:(long long)a0 forAccount:(id)a1;
+ (void)saveIdentityMap;
+ (id)isActionSupportedForType:(long long)a0 account:(id)a1 options:(id)a2;
+ (BOOL)deleteKeysWithError:(id *)a0;
+ (BOOL)_shouldAddBiometricHeader;
+ (BOOL)hasKeysForAccount:(id)a0 forSignaturePurpose:(unsigned long long)a1 withError:(id *)a2;
+ (BOOL)proxyDeleteAllKeysWithError:(id *)a0;
+ (BOOL)isAvailableForAccount:(id)a0;
+ (long long)stateForAccount:(id)a0;
+ (BOOL)deleteAllKeysWithError:(id *)a0;
+ (id)disableForAccount:(id)a0;
+ (id)ACLVersionForAccessControl:(struct __SecAccessControl { } *)a0;
+ (BOOL)isDeviceInBiometricLockout;
+ (BOOL)isActionSupportedForType:(long long)a0 account:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)ACLVersionForConstraints:(id)a0;
+ (id)handleResponse:(id)a0 financeResponse:(id)a1 session:(id)a2 taskInfo:(id)a3;
+ (BOOL)_deleteKeysWithOptions:(id)a0 error:(id *)a1;
+ (id)signAndReturnChallenge:(id)a0 withAccount:(id)a1 clientInfo:(id)a2 options:(id)a3;
+ (id)ACLVersionForAccount:(id)a0 options:(id)a1 error:(id *)a2;
+ (void)setDeviceState:(long long)a0;
+ (id)signChallenge:(id)a0 withAccount:(id)a1 clientInfo:(id)a2 options:(id)a3;
+ (id)headersWithAccount:(id)a0 options:(id)a1 signatureResult:(id)a2;
+ (id)resumptionHeadersFromRequest:(id)a0;

@end
