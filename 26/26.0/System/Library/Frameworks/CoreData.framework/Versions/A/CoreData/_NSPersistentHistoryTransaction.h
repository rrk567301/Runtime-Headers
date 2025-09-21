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
- (id)contextName;
- (id)bundleID;
- (void)dealloc;
- (id)storeID;
- (id)timestamp;
- (void)encodeWithCoder:(id)a0;
- (long long)transactionNumber;
- (id)objectIDNotification;
- (id)postQueryGenerationToken;
- (id)initWithCoder:(id)a0;
- (id)token;
- (id)_backingObjectID;
- (id)processID;
- (id)initWithDictionary:(id)a0 andObjectID:(id)a1;
- (id)initialQueryGenerationToken;

@end
