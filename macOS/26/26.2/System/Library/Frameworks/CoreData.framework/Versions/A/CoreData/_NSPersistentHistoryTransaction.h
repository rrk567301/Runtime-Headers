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

- (id)initialQueryGenerationToken;
- (id)initWithDictionary:(id)a0 andObjectID:(id)a1;
- (id)token;
- (id)changes;
- (id)initWithCoder:(id)a0;
- (id)bundleID;
- (id)storeID;
- (id)author;
- (long long)transactionNumber;
- (id)objectIDNotification;
- (void)encodeWithCoder:(id)a0;
- (id)_backingObjectID;
- (id)processID;
- (id)postQueryGenerationToken;
- (id)timestamp;
- (id)contextName;
- (void)dealloc;

@end
