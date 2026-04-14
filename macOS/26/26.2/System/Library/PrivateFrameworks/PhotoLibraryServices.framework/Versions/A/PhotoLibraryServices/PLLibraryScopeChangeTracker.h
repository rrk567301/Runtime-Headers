@class NSManagedObjectContext, NSDictionary, NSPersistentHistoryToken;
@protocol PLLibraryScopeChangeTrackerDelegate;

@interface PLLibraryScopeChangeTracker : NSObject {
    NSPersistentHistoryToken *_lastKnownToken;
    NSManagedObjectContext *_context;
    NSDictionary *_entityNameToAllowedPropertyDescriptionMap;
}

@property (weak, nonatomic) id<PLLibraryScopeChangeTrackerDelegate> delegate;
@property (readonly) BOOL hasChangeTrackerToken;

- (void)stop;
- (void).cxx_destruct;
- (id)currentToken;
- (BOOL)start;
- (void)updateLastKnownTokenToResult:(id)a0;
- (id)lastKnownTokenFromDisk;
- (id)initWithManagedObjectContext:(id)a0;
- (void)clearToken;
- (id)_transactionIteratorSinceToken:(id)a0;
- (id)_allowedPropertyDescriptionsForEntityName:(id)a0;
- (id)fetchObjectsNeedingEvaluation;
- (id)fetchResultsSincePersistentHistoryToken:(id)a0;
- (void)saveLastKnownChangeTrackerTokenToDisk;

@end
