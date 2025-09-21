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
@property (nonatomic) char shouldFetchAssetContent;
@property (nonatomic) char shouldRequestEncryptedAssetOwnerIdentifier;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;

- (void).cxx_destruct;
- (char)allowsAnonymousAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateRequestOperations;
- (char)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)a0 recordIDs:(id)a1 recordIDsToEtags:(id)a2 recordIDsToVersionETags:(id)a3 desiredKeys:(id)a4;
- (id)recordIDsUsedInZones:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (char)requestGETPreAuth;
- (id)requestOperationClasses;
- (id)requestedListFieldsForDesiredIndexedListKeys;
- (id)zoneIDsToLock;

@end
