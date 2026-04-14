@class NSArray, NSDictionary, NSMutableDictionary, NSSet;

@interface CKDFetchRecordsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (nonatomic) unsigned long long recordCount;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (retain, nonatomic) NSArray *desiredIndexedListKeys;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic) BOOL shouldRequestEncryptedAssetOwnerIdentifier;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)zoneIDsToLock;
- (id)zoneIDsUsed;
- (void)fillOutRequestProperties:(id)a0;
- (BOOL)requestGETPreAuth;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 recordIDs:(id)a1 recordIDsToEtags:(id)a2 recordIDsToVersionETags:(id)a3 desiredKeys:(id)a4;
- (void).cxx_destruct;
- (id)recordIDsUsedInZones:(id)a0;
- (id)requestedListFieldsForDesiredIndexedListKeys;

@end
