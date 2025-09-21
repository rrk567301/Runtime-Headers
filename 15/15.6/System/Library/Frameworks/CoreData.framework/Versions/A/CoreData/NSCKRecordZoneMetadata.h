@class NSData, NSString, CKServerChangeToken, NSCKDatabaseMetadata, NSDate, NSNumber, NSSet;

@interface NSCKRecordZoneMetadata : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSNumber *hasRecordZoneNum;
@property (retain, nonatomic) NSNumber *hasSubscriptionNum;
@property (retain, nonatomic) NSString *ckRecordZoneName;
@property (retain, nonatomic) NSString *ckOwnerName;
@property (retain, nonatomic) CKServerChangeToken *currentChangeToken;
@property (retain, nonatomic) NSCKDatabaseMetadata *database;
@property (retain, nonatomic) NSDate *lastFetchDate;
@property (nonatomic) char hasRecordZone;
@property (nonatomic) char hasSubscription;
@property (retain, nonatomic) NSSet *records;
@property (retain, nonatomic) NSSet *mirroredRelationships;
@property (retain, nonatomic) NSSet *queries;
@property (nonatomic) char supportsFetchChanges;
@property (nonatomic) char supportsAtomicChanges;
@property (nonatomic) char supportsRecordSharing;
@property (nonatomic) char supportsZoneSharing;
@property (nonatomic) char needsImport;
@property (nonatomic) char needsRecoveryFromZoneDelete;
@property (nonatomic) char needsRecoveryFromUserPurge;
@property (nonatomic) char needsShareUpdate;
@property (nonatomic) char needsShareDelete;
@property (nonatomic) char needsRecoveryFromIdentityLoss;
@property (nonatomic) char needsNewShareInvitation;
@property (retain, nonatomic) NSData *encodedShareData;

+ (id)fetchZoneIDsAssignedToObjectsWithIDs:(id)a0 fromStore:(id)a1 inContext:(id)a2 error:(id *)a3;

@end
