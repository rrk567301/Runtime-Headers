@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSMutableArray *outstandingDecryptions;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *recordDecryptGroup;
@property (getter=isStarted) BOOL started;
@property (getter=isMarkedToFinish) BOOL markedToFinish;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordDecryptQueue;
@property (nonatomic) unsigned long long maxUnwrapAttempts;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;
@property (nonatomic) BOOL forcePCSDecrypt;

- (id)activityCreate;
- (void)finishDecryption;
- (BOOL)shouldCheckAppVersion;
- (id)_unwrapPackageAssets:(id)a0 inRecordWithID:(id)a1 forField:(id)a2 withPCS:(struct _OpaquePCSShareProtection { } *)a3;
- (void)main;
- (void)_clearProtectionDataForRecordInfo:(id)a0;
- (void)_handleProtectionDataForRecordInfo:(id)a0;
- (void)_finishDecryptOperation;
- (id)_decryptRecordPCSForRecord:(id)a0 usingSharePCS:(id)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)_possiblyWrapError:(id)a0 forRecordWithID:(id)a1 withCode:(long long)a2 format:(id)a3;
- (id)_unwrapEncryptedPropertiesOnRecord:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)_unwrapMergeableRecordValue:(id)a0 inRecordWithID:(id)a1 forField:(id)a2 withPCS:(struct _OpaquePCSShareProtection { } *)a3;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)supportsClearAssetEncryption;
- (void)_decryptRecordInfo:(id)a0 usingWebSharingIdentityData:(id)a1;
- (id)_unwrapAssetKeyForAsset:(id)a0 inRecordWithID:(id)a1 forField:(id)a2 withPCS:(struct _OpaquePCSShareProtection { } *)a3;
- (void)_recordInfoWasDecrypted:(id)a0 nextSteps:(id /* block */)a1;
- (id)_unwrapEncryptedPropertiesForRecordValueStore:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)_decryptRecordPCSForRecord:(id)a0 usingZonePCS:(id)a1;
- (void)_decryptRecordInfo:(id)a0;
- (void)_handleZoneProtectionDataForRecordInfo:(id)a0;
- (void)decryptRecord:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handleShareProtectionDataForRecordInfo:(id)a0;
- (void).cxx_destruct;
- (id)_decryptRecordPCSForRecord:(id)a0 usingChainPCS:(id)a1;

@end
