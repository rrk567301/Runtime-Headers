@interface PKCloudStoreError : NSError

+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
+ (BOOL)_isCloudKitErrorDomain:(id)a0;

- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)initWithError:(id)a0;
- (long long)_code;
- (id)errorForPartialErrorWithObject:(id)a0;
- (BOOL)isChangeTokenExpired;
- (BOOL)isZoneNotFoundError;
- (BOOL)isPartialError;
- (BOOL)isUnrecoverableDecryptionError;
- (BOOL)isManateeNotAvailableError;
- (BOOL)isNetworkUnavailable;
- (BOOL)isAccountUnavailable;
- (BOOL)isKeychainSyncingInProgress;
- (BOOL)isPCSError;
- (BOOL)isInitializationTimeOutError;
- (BOOL)isUnknownItemError;
- (BOOL)isParticipantMayNeedVerificationError;
- (BOOL)isAuthenticationOrQuotaError;
- (id)allZoneIDs;
- (id)_objectsOfClassTypeFromPartialErrors:(Class)a0;
- (id)_partialErrorsDictionary;
- (id)_allPartialErrors;

@end
