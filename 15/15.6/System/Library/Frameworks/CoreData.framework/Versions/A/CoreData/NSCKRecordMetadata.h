@class NSString, NSCKRecordZoneMetadata, NSData, NSSet, NSNumber;

@interface NSCKRecordMetadata : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) NSData *encodedRecord;
@property (retain, nonatomic) NSNumber *entityId;
@property (retain, nonatomic) NSNumber *entityPK;
@property (retain, nonatomic) NSData *ckShare;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;
@property (nonatomic) char needsUpload;
@property (nonatomic) char needsLocalDelete;
@property (nonatomic) char needsCloudDelete;
@property (retain, nonatomic) NSNumber *lastExportedTransactionNumber;
@property (retain, nonatomic) NSNumber *pendingExportTransactionNumber;
@property (retain, nonatomic) NSNumber *pendingExportChangeTypeNumber;
@property (retain, nonatomic) NSSet *moveReceipts;

+ (id)encodeRecord:(id)a0 error:(id *)a1;
+ (id)insertMetadataForObject:(id)a0 setRecordName:(char)a1 inZoneWithID:(id)a2 recordNamePrefix:(id)a3 error:(id *)a4;
+ (id)recordFromEncodedData:(id)a0 error:(id *)a1;

- (id)createEncodedMoveReceiptData:(id *)a0;
- (id)createRecordFromSystemFields;
- (char)mergeMoveReceiptsWithData:(id)a0 error:(id *)a1;

@end
