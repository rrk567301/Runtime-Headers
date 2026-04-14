@class NSNumber, NSString, NSCKImportOperation;

@interface NSCKImportPendingRelationship : NSManagedObject

@property (retain, nonatomic) NSNumber *needsDelete;
@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *cdEntityName;
@property (retain, nonatomic) NSString *relatedRecordName;
@property (retain, nonatomic) NSString *relatedEntityName;
@property (retain, nonatomic) NSString *relationshipName;
@property (retain, nonatomic) NSString *recordZoneName;
@property (retain, nonatomic) NSString *recordZoneOwnerName;
@property (retain, nonatomic) NSString *relatedRecordZoneName;
@property (retain, nonatomic) NSString *relatedRecordZoneOwnerName;
@property (nonatomic) BOOL needsDeleteBool;
@property (retain, nonatomic) NSCKImportOperation *operation;

@end
