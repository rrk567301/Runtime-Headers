@class NSCKRecordZoneMetadataEncodedShareAsset, NSString, CKServerChangeToken, NSCKDatabaseMetadata, NSDate, NSNumber, NSSet;

@interface NSCKRecordZoneMetadata : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSNumber *hasRecordZoneNum;
@property (retain, nonatomic) NSNumber *hasSubscriptionNum;
@property (retain, nonatomic) NSString *ckRecordZoneName;
@property (retain, nonatomic) NSString *ckOwnerName;
@property (retain, nonatomic) CKServerChangeToken *currentChangeToken;
@property (retain, nonatomic) NSCKDatabaseMetadata *database;
@property (retain, nonatomic) NSDate *lastFetchDate;
@property (nonatomic) BOOL hasRecordZone;
@property (nonatomic) BOOL hasSubscription;
@property (retain, nonatomic) NSSet *records;
@property (retain, nonatomic) NSSet *mirroredRelationships;
@property (retain, nonatomic) NSSet *queries;
@property (nonatomic) BOOL supportsFetchChanges;
@property (nonatomic) BOOL supportsAtomicChanges;
@property (nonatomic) BOOL supportsRecordSharing;
@property (nonatomic) BOOL supportsZoneSharing;
@property (nonatomic) BOOL needsImport;
@property (nonatomic) BOOL needsRecoveryFromZoneDelete;
@property (nonatomic) BOOL needsRecoveryFromUserPurge;
@property (nonatomic) BOOL needsShareUpdate;
@property (nonatomic) BOOL needsShareDelete;
@property (nonatomic) BOOL needsRecoveryFromIdentityLoss;
@property (nonatomic) BOOL needsNewShareInvitation;
@property (retain, nonatomic) NSCKRecordZoneMetadataEncodedShareAsset *encodedShareAsset;

+ (id)fetchZoneIDsAssignedToObjectsWithIDs:(id)a0 fromStore:(id)a1 inContext:(id)a2 error:(id *)a3;
+ (id)countZonesInStore:(id)a0 matchingPredicate:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;

- (void)updateEncodedShareWithData:(id)a0;
- (void)destroyEncodedShareData;

@end
