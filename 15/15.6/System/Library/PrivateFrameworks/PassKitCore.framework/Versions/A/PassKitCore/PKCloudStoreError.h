@interface PKCloudStoreError : NSError

+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
+ (char)_isCloudKitErrorDomain:(id)a0;

- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)initWithError:(id)a0;
- (long long)_code;
- (id)errorForPartialErrorWithObject:(id)a0;
- (id)_allPartialErrors;
- (id)_objectsOfClassTypeFromPartialErrors:(Class)a0;
- (id)_partialErrorsDictionary;
- (id)allZoneIDs;
- (char)isAccountUnavailable;
- (char)isAuthenticationOrQuotaError;
- (char)isChangeTokenExpired;
- (char)isConflictDetected;
- (char)isInitializationTimeOutError;
- (char)isKeychainSyncingInProgress;
- (char)isManateeNotAvailableError;
- (char)isNetworkUnavailable;
- (char)isPCSError;
- (char)isPartialError;
- (char)isPartialErrorWithUnkownItems;
- (char)isParticipantMayNeedVerificationError;
- (char)isUnknownItemError;
- (char)isUnrecoverableDecryptionError;
- (char)isZoneNotFoundError;

@end
