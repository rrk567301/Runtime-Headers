@class NSCKRecordMetadataEncodedRecordAsset, NSString, NSCKRecordZoneMetadata, NSSet, NSCKRecordMetadataSystemFieldsAsset, NSNumber;

@interface NSCKRecordMetadata : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSNumber *entityId;
@property (retain, nonatomic) NSNumber *entityPK;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;
@property (nonatomic) BOOL needsUpload;
@property (nonatomic) BOOL needsLocalDelete;
@property (nonatomic) BOOL needsCloudDelete;
@property (retain, nonatomic) NSNumber *lastExportedTransactionNumber;
@property (retain, nonatomic) NSNumber *pendingExportTransactionNumber;
@property (retain, nonatomic) NSNumber *pendingExportChangeTypeNumber;
@property (retain, nonatomic) NSSet *moveReceipts;
@property (retain, nonatomic) NSCKRecordMetadataSystemFieldsAsset *systemFieldsAsset;
@property (retain, nonatomic) NSCKRecordMetadataEncodedRecordAsset *encodedRecordAsset;

+ (id)encodeRecord:(id)a0 error:(id *)a1;
+ (id)insertMetadataForObject:(id)a0 setRecordName:(BOOL)a1 inZoneWithID:(id)a2 recordNamePrefix:(id)a3 error:(id *)a4;
+ (id)recordFromEncodedData:(id)a0 error:(id *)a1;

- (void)destroySystemFields;
- (BOOL)mergeMoveReceiptsWithData:(id)a0 error:(id *)a1;
- (void)updateEncodedRecordWithData:(id)a0;
- (void)destroyEncodedRecord;
- (id)createRecordFromSystemFields;
- (void)updateSystemFieldsWithData:(id)a0;
- (id)createEncodedMoveReceiptData:(id *)a0;

@end
