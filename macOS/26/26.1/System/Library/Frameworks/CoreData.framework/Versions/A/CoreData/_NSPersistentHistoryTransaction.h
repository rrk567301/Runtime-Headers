@class NSArray, NSString, NSData, NSPersistentStoreCoordinator, NSManagedObjectID;

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {
    long long _rowIdentifier;
    double _timestamp;
    NSArray *_changes;
    NSString *_storeID;
    NSString *_bundleID;
    NSString *_processID;
    NSString *_contextName;
    NSString *_author;
    NSData *_queryGeneration;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_backingObjectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)author;
- (id)changes;
- (id)storeID;
- (id)postQueryGenerationToken;
- (id)initialQueryGenerationToken;
- (id)token;
- (void)encodeWithCoder:(id)a0;
- (id)objectIDNotification;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)processID;
- (id)_backingObjectID;
- (id)timestamp;
- (id)bundleID;
- (id)initWithDictionary:(id)a0 andObjectID:(id)a1;
- (id)contextName;
- (long long)transactionNumber;

@end
