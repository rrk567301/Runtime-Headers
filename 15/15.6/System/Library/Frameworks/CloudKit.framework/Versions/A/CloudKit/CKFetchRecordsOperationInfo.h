@class NSArray, NSDictionary, NSSet;

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordIDs;
@property (nonatomic) char isFetchCurrentUserOperation;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (retain, nonatomic) NSDictionary *desiredPackageFileIndices;
@property (nonatomic) char fetchingAssetsForRereference;
@property (copy, nonatomic) id /* block */ cloneContextReturnBlock;
@property (nonatomic) char shouldFetchAssetContent;
@property (nonatomic) char shouldFetchAssetContentInMemory;
@property (nonatomic) char shouldRequestEncryptedAssetOwnerIdentifier;
@property (nonatomic) char dropInMemoryAssetContentASAP;
@property (nonatomic) char shouldFetchMergeableValues;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic) char shouldCloneFileInAssetCache;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
