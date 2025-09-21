@class NSString, NSCKRecordZoneMetadata, NSCKMirroredRelationshipSystemFieldsAsset, NSNumber;

@interface NSCKMirroredRelationship : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSString *cdEntityName;
@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *relatedEntityName;
@property (retain, nonatomic) NSString *relatedRecordName;
@property (retain, nonatomic) NSString *relationshipName;
@property (retain, nonatomic) NSNumber *isPending;
@property (retain, nonatomic) NSNumber *needsDelete;
@property (retain, nonatomic) NSNumber *isUploaded;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;
@property (retain, nonatomic) NSCKMirroredRelationshipSystemFieldsAsset *systemFieldsAsset;

- (void)updateSystemFieldsWithData:(id)a0;
- (void)destroySystemFieldsData;

@end
