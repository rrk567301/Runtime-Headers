@class NSString, NSDictionary, NSPersistentStore, NSPersistentHistoryToken;

@interface NSCloudKitMirroringDelegatePreJazzkonMetadata : NSObject {
    NSPersistentStore *_store;
    char _loaded;
    char _hasChanges;
    char _hasInitializedZone;
    char _hasInitializedZoneSubscription;
    char _hasInitializedDatabaseSubscription;
    NSString *_ckIdentityRecordName;
    char _hasCheckedCKIdentity;
    NSDictionary *_keyToPreviousServerChangeToken;
    NSPersistentHistoryToken *_lastHistoryToken;
}

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;

@end
