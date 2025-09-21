@class NSString, ICCloudSyncingObject;

@interface ICAssetSignature : NSManagedObject

@property (retain, nonatomic) NSString *cloudKitRecordKey;
@property (retain, nonatomic) NSString *fetchedLocalAssetSignatureHash;
@property (retain, nonatomic) NSString *lastKnownServerAssetSignatureHash;
@property (nonatomic) BOOL isUserSpecificRecordKey;
@property (retain, nonatomic) ICCloudSyncingObject *cloudSyncingObject;
@property (readonly, nonatomic) BOOL outOfDate;

+ (id)allAssetSignaturesForCloudSyncingObject:(id)a0 context:(id)a1;
+ (id)assetSignatureForCloudKitRecordKey:(id)a0 isUserSpecificRecordKey:(BOOL)a1 cloudSyncingObject:(id)a2 context:(id)a3;
+ (id)assetSignatureHashFromAssets:(id)a0;
+ (id)assetSignaturesMatchingPredicate:(id)a0 context:(id)a1;
+ (id)commonAssetSignaturesForCloudSyncingObject:(id)a0 context:(id)a1;
+ (BOOL)hasFetchedAssets:(id)a0;
+ (BOOL)hasLocallyStoredAssetsInObject:(id)a0 context:(id)a1;
+ (id)makeAssetSignatureIfNeededWithCloudKitRecordKey:(id)a0 isUserSpecificRecordKey:(BOOL)a1 cloudSyncingObject:(id)a2 account:(id)a3 context:(id)a4;
+ (id)makeAssetSignatureWithCloudKitRecordKey:(id)a0 fetchedLocalAssetSignatureHash:(id)a1 lastKnownServerAssetSignatureHash:(id)a2 isUserSpecificRecordKey:(BOOL)a3 cloudSyncingObject:(id)a4 account:(id)a5 context:(id)a6;
+ (void)mergeIncomingAssetsFromRecord:(id)a0 forObject:(id)a1 account:(id)a2 context:(id)a3;
+ (BOOL)shouldWriteAssetIfNeededToKey:(id)a0 inRecord:(id)a1 forObject:(id)a2 context:(id)a3;
+ (id)userSpecificAssetSignaturesForCloudSyncingObject:(id)a0 context:(id)a1;

@end
