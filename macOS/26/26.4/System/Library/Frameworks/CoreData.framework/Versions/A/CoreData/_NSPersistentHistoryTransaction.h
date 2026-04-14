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
- (long long)transactionNumber;
- (id)changes;
- (id)processID;
- (id)storeID;
- (id)contextName;
- (id)token;
- (id)timestamp;
- (id)_backingObjectID;
- (id)bundleID;
- (void)encodeWithCoder:(id)a0;
- (id)objectIDNotification;
- (id)initWithDictionary:(id)a0 andObjectID:(id)a1;
- (id)initialQueryGenerationToken;
- (id)initWithCoder:(id)a0;
- (id)postQueryGenerationToken;
- (void)dealloc;

@end
