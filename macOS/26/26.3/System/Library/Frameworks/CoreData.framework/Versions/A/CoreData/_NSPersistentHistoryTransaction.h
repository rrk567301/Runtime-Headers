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

- (id)changes;
- (id)postQueryGenerationToken;
- (id)_backingObjectID;
- (id)bundleID;
- (id)token;
- (id)contextName;
- (id)initialQueryGenerationToken;
- (id)storeID;
- (id)processID;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)author;
- (id)initWithDictionary:(id)a0 andObjectID:(id)a1;
- (id)objectIDNotification;
- (id)timestamp;
- (long long)transactionNumber;
- (void)encodeWithCoder:(id)a0;

@end
