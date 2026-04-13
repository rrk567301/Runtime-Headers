@class CKServerChangeToken, NSMutableSet;

@interface PFCloudKitImportDatabaseContext : NSObject {
    NSMutableSet *_changedRecordZoneIDs;
    NSMutableSet *_deletedRecordZoneIDs;
    NSMutableSet *_purgedRecordZoneIDs;
    CKServerChangeToken *_updatedChangeToken;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
