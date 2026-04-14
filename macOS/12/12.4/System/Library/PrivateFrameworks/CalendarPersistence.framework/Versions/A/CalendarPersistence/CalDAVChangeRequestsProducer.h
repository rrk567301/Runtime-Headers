@class NSMutableSet;
@protocol EKServerChangeObserver;

@interface CalDAVChangeRequestsProducer : NSObject {
    NSMutableSet *_createdScheduleChangeRequests;
    id<EKServerChangeObserver> _observer;
}

+ (id)sharedInstance;
+ (void)registerObserver:(id)a0;
+ (BOOL)changeRequestsShouldBeProducedForContext:(id)a0;
+ (void)registerForContextNotifications;
+ (long long)changeTypeForCRType:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)managedObjectContextDidSave:(id)a0;
- (void)registerObserver:(id)a0;
- (void)managedObjectContextWillSave:(id)a0;
- (void)addCreatedScheduleChangeRequest:(id)a0;
- (id)createdScheduleRequestForMessage:(id)a0;
- (void)processInsertedManagedObjects:(id)a0 inManagedObjectContext:(id)a1;
- (void)processUpdatedManagedObjects:(id)a0 inManagedObjectContext:(id)a1;
- (void)processDeletedManagedObjects:(id)a0 inManagedObjectContext:(id)a1;
- (void)postProcessInsertedChangeRequests:(id)a0 inManagedObjectContext:(id)a1;

@end
