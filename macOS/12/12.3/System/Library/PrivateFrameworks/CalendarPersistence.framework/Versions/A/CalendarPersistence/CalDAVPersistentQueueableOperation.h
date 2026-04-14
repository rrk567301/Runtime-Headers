@class NSManagedObjectID;

@interface CalDAVPersistentQueueableOperation : CalDAVQueueableOperation {
    NSManagedObjectID *_changeRequestID;
    long long _sequenceNumber;
    int _crType;
}

- (void).cxx_destruct;
- (long long)sequenceNumber;
- (void)enqueue;
- (id)initWithChangeRequest:(id)a0 andSession:(id)a1;
- (void)removeOperationFromPersistence;
- (int)crType;
- (id)changeRequestID;
- (id)extraUserInfoForRebuiltError;
- (void)configureOperationDependencies;
- (id)createConsumerCalManagedObjectContext;
- (id)associatedChangeRequestInContext:(id)a0;

@end
