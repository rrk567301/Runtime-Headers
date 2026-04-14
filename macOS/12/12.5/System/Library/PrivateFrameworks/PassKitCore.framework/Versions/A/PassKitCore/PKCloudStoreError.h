@interface PKCloudStoreError : NSError

+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
+ (BOOL)_isCloudKitErrorDomain:(id)a0;

- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)initWithError:(id)a0;
- (long long)_code;
- (id)_partialErrorsDictionary;
- (BOOL)isPartialError;
- (id)_allPartialErrors;
- (BOOL)isChangeTokenExpired;
- (BOOL)isZoneNotFoundError;
- (BOOL)isUnrecoverableDecryptionError;
- (BOOL)isManateeNotAvailableError;
- (BOOL)isKeychainSyncingInProgress;
- (BOOL)isPCSError;
- (BOOL)isParticipantMayNeedVerificationError;
- (id)_objectsOfClassTypeFromPartialErrors:(Class)a0;
- (id)errorForPartialErrorWithObject:(id)a0;
- (BOOL)isNetworkUnavailable;
- (BOOL)isInitializationTimeOutError;
- (BOOL)isUnknownItemError;
- (id)allZoneIDs;

@end
