@class NSCountedSet, NSSet, NSString, NSMutableSet, NSMutableDictionary;

@interface CalManagedObjectContext : NSManagedObjectContext {
    NSMutableSet *_deletedObjectIDsFromMerge;
    NSMutableDictionary *_threadSafeData;
    NSMutableDictionary *_childContexts;
    NSCountedSet *_childContextReferences;
    NSMutableDictionary *_associatedUIDs;
}

@property (nonatomic) BOOL containsCalendarData;
@property (nonatomic) BOOL writeChangesToCalDAVServer;
@property (nonatomic) BOOL trackChangesForCalDAVServer;
@property (nonatomic) BOOL writeChangesToTruthFileStore;
@property (nonatomic) BOOL trackChangesToExchangeServer;
@property (nonatomic) BOOL notifyCalendarAgent;
@property (readonly) BOOL isContextForCalendarStore;
@property (readonly) BOOL isContextForMigration;
@property (readonly) NSSet *deletedObjectIDsFromMerge;
@property (retain, nonatomic) NSString *originatorId;

+ (id)managedObjectContext;
+ (void)addPrefetchRelationshipKeyPaths:(id)a0 toFetch:(id)a1;
+ (id)managedObjectContextWithOriginatorId:(id)a0;
+ (void)performBlockWithManagedObjectContext:(id /* block */)a0;
+ (void)logDetailedValidationError:(id)a0;
+ (void)quickFetchWithBlock:(id /* block */)a0;
+ (void)warnIfManagedObjectContextIsNil:(id)a0;
+ (BOOL)isCalendarAgent;
+ (void)instantiateSharedMonitors;
+ (id)_userInfoForLog:(id)a0;
+ (void)setIsCalendarAgent:(BOOL)a0;
+ (void)quickFetchWithBlock:(id /* block */)a0 allowedStaleness:(double)a1;

- (void).cxx_destruct;
- (void)deleteObject:(id)a0;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)save:(id *)a0;
- (void)refreshObject:(id)a0 mergeChanges:(BOOL)a1;
- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (BOOL)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (id)parentContext;
- (void)mergeChangesFromContextDidSaveNotification:(id)a0;
- (long long)context:(id)a0 shouldHandleInaccessibleFault:(id)a1 forObjectID:(id)a2 andTrigger:(id)a3;
- (id)initWithPersistentStoreCoordinator:(id)a0;
- (id)existingObjectWithIDString:(id)a0;
- (id)objectIDFromString:(id)a0;
- (id)refetchObjectsFromStoreWithObjectIDs:(id)a0 entityName:(id)a1;
- (id)createChildContext;
- (void)logDetailedValidationError:(id)a0;
- (void)associateWithIdentifier:(id)a0 secondaryIdentifier:(id)a1;
- (BOOL)saveIfContextHasChanges;
- (void)setThreadSafeData:(id)a0 forKey:(id)a1;
- (id)getThreadSafeDataForKey:(id)a0;
- (void)clearThreadSafeDataForKey:(id)a0;
- (id)initWithConcurrencyType:(unsigned long long)a0 persistentStoreCoordinator:(id)a1;
- (BOOL)isUserContext;
- (id)childContextForIdentifier:(id)a0;
- (void)_associateWithIdentifier:(id)a0 secondaryIdentifier:(id)a1;
- (void)_associateChildContext:(id)a0 withIdentifier:(id)a1 secondaryIdentifier:(id)a2;
- (void)parentContextDidSave:(id)a0;
- (id)_attachChildContext;
- (id)associatedIdentifiers;
- (id)childContexts;
- (void)_detachChildContext:(id)a0;
- (id)flattenedTreeOfChildContexts;
- (unsigned long long)_clientCountForChildContext:(id)a0;
- (id)objectIDsFromStrings:(id)a0;
- (id)existingObjectsWithIDStrings:(id)a0;
- (id)refetchObjectsFromStoreWithObjectIDStrings:(id)a0 entityName:(id)a1;
- (id)attachChildContextForIdentifier:(id)a0 secondaryIdentifier:(id)a1;
- (void)detachFromParentContext;
- (id)associatedAndSecondaryIdentifiers;
- (id)childContextIdentifiers;
- (unsigned long long)clientCount;
- (void)addDeletedObjectIDsFromMerge:(id)a0;
- (BOOL)hasPersistentChanges;

@end
