@class NSString, NSManagedObjectID;

@interface CoreCalendarSource : NSObject {
    NSManagedObjectID *_objectID;
    NSString *_key;
    NSString *_bundlePath;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)type;
- (id)bundlePath;
- (int)status;
- (id)initWithKey:(id)a0;
- (id)key;
- (void)setBundlePath:(id)a0;
- (void)notifyChanges;
- (BOOL)hasCapability:(int)a0;
- (BOOL)isBirthday;
- (id)managedObjectID;
- (void)setManagedObjectID:(id)a0;
- (id)freeBusyCache;
- (BOOL)isOwnerMe;
- (BOOL)modifyEntity:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)hasCalendarItemForSharedUID:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)addEntity:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)removeEntity:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)isSourceInSameAccount:(id)a0;
- (BOOL)isExchange;
- (BOOL)isCalDAV;
- (BOOL)isSourceInSameAccount:(id)a0 ignoringOwner:(BOOL)a1;
- (id)entitiesMatchingSearchElement:(id)a0 inManagedObjectContext:(id)a1;
- (id)meForSource;
- (void)notifyStatusChange;
- (id)lastOperationError;
- (id)entityForLocalUID:(id)a0 inManagedObjectContext:(id)a1;
- (id)entityForSharedUID:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)isSubscription;
- (id)allEntitiesInManagedObjectContext:(id)a0;
- (id)allToDosInManagedObjectContext:(id)a0;
- (id)allEventsInManagedObjectContext:(id)a0;
- (BOOL)addEntities:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)modifyEntities:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)removeEntities:(id)a0 inManagedObjectContext:(id)a1;
- (id)ownerForSource;
- (BOOL)allowsSchedulingByMe;
- (id)eventsWithFutureInvitationsInManagedObjectContext:(id)a0;
- (id)entitiesStartingBefore:(id)a0 withEntityType:(int)a1 includingRecurringEvents:(BOOL)a2 inManagedObjectContext:(id)a3;
- (void)fireRepositoryParametersChangeNotification;
- (id)entitiesEndingBefore:(id)a0 withEntityType:(int)a1 inManagedObjectContext:(id)a2;
- (void)removeEventOccurrencesEndingBefore:(id)a0 inManagedObjectContext:(id)a1;

@end
