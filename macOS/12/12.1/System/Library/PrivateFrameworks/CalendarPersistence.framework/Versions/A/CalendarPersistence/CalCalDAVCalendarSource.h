@class NSTimeZone, CALAddress, NSString, NSError, NSManagedObjectID;

@interface CalCalDAVCalendarSource : CalRemoteCalendarSource {
    NSString *_principalUID;
    NSString *_cacheControllerPath;
    NSError *_lastOperationError;
    NSTimeZone *_timeZone;
}

@property (retain) NSManagedObjectID *principalID;
@property (retain) CALAddress *ownerAddress;
@property BOOL isOwnerMe;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)setTimeZone:(id)a0;
- (id)timeZone;
- (id)initWithKey:(id)a0;
- (BOOL)isDelegate;
- (BOOL)hasCapability:(int)a0;
- (id)freeBusyCache;
- (void)setPrincipalUID:(id)a0;
- (id)principalUID;
- (BOOL)modifyEntity:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)addEntity:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)removeEntity:(id)a0 inManagedObjectContext:(id)a1;
- (id)backingPrincipal;
- (BOOL)isSourceInSameAccount:(id)a0;
- (BOOL)isCalDAV;
- (BOOL)isSourceInSameAccount:(id)a0 ignoringOwner:(BOOL)a1;
- (id)meForSource;
- (BOOL)addEntities:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)modifyEntities:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)removeEntities:(id)a0 inManagedObjectContext:(id)a1;
- (id)ownerForSource;
- (BOOL)allowsSchedulingByMe;
- (BOOL)addEntities:(id)a0 fromServer:(BOOL)a1 inManagedObjectContext:(id)a2;
- (BOOL)addEntity:(id)a0 fromServer:(BOOL)a1 inManagedObjectContext:(id)a2;
- (BOOL)modifyEntity:(id)a0 fromServer:(BOOL)a1 inManagedObjectContext:(id)a2;
- (BOOL)modifyEntities:(id)a0 fromServer:(BOOL)a1 inManagedObjectContext:(id)a2;
- (BOOL)removeEntity:(id)a0 fromServer:(BOOL)a1 inManagedObjectContext:(id)a2;
- (BOOL)removeEntities:(id)a0 fromServer:(BOOL)a1 inManagedObjectContext:(id)a2;
- (id)backingPrincipalInContext:(id)a0;
- (BOOL)hasNoPrincipal;
- (void)queueScanDropBoxContentsForEntity:(id)a0;
- (void)setCacheControllerPath:(id)a0;

@end
