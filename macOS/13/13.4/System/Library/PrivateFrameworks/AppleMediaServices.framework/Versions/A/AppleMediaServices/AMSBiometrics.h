@class NSArray;

@interface AMSBiometrics : NSObject

@property (class, readonly, copy) NSArray *identityMap;
@property (class, readonly) long long deviceState;
@property (class, readonly, getter=isIdentityMapValid) BOOL identityMapValid;
@property (class, readonly) long long type;

+ (void)setDeviceState:(long long)a0;
+ (id)ACLVersionForAccount:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)ACLVersionForAccessControl:(struct __SecAccessControl { } *)a0;
+ (id)ACLVersionForConstraints:(id)a0;
+ (void)saveIdentityMap;
+ (BOOL)_deleteKeysWithOptions:(id)a0 error:(id *)a1;
+ (BOOL)_shouldAddBiometricHeader;
+ (id)_stateHeaderValueForAccount:(id)a0;
+ (BOOL)deleteKeysWithError:(id *)a0;
+ (id)disableForAccount:(id)a0;
+ (id)handleResponse:(id)a0 session:(id)a1 taskInfo:(id)a2;
+ (id)headersWithAccount:(id)a0 options:(id)a1 signatureResult:(id)a2;
+ (BOOL)isActionSupported:(long long)a0 withAccessControl:(struct __SecAccessControl { } *)a1;
+ (BOOL)isActionSupported:(long long)a0 withConstraints:(id)a1;
+ (BOOL)isAvailableForAccount:(id)a0;
+ (id)minimumACLVersionForAction:(long long)a0;
+ (id)resumptionHeadersFromRequest:(id)a0;
+ (id)setState:(long long)a0 forAccount:(id)a1;
+ (id)signChallenge:(id)a0 withAccount:(id)a1 clientInfo:(id)a2 options:(id)a3;
+ (long long)stateForAccount:(id)a0;

@end
