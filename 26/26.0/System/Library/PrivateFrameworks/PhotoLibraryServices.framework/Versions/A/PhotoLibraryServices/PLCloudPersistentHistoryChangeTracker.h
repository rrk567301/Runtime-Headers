@class NSString, NSPersistentStoreCoordinator, NSPersistentHistoryToken, PLChangeHandlingNotificationObserver;
@protocol PLCloudPersistentHistoryChangeTrackerDelegate;

@interface PLCloudPersistentHistoryChangeTracker : NSObject {
    NSPersistentHistoryToken *_lastKnownToken;
    NSPersistentStoreCoordinator *_coordinator;
    PLChangeHandlingNotificationObserver *_notificationObserver;
}

@property (readonly, copy) NSString *name;
@property (weak, nonatomic) id<PLCloudPersistentHistoryChangeTrackerDelegate> delegate;
@property (readonly, copy) NSString *lastKnownTokenDescription;
@property (readonly) BOOL hasChangeTrackerToken;

- (void)disconnect;
- (void)_registerForChangeHandlingNotifications;
- (BOOL)isConnected;
- (id)fetchAllEventsInContext:(id)a0;
- (void)updateLastKnownTokenToResult:(id)a0;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)a0;
- (void)_unregisterForChangeHandlingNotifications;
- (void)_updateLastKnownTokensToToken:(id)a0;
- (void)saveLastKnownChangeTrackerTokenToDiskWithContext:(id)a0;
- (void)forceTokenToCurrent;
- (id)lastKnownTokenFromDisk;
- (BOOL)connectWithContext:(id)a0;
- (void)clearToken;
- (id)_eventsResultFromPersistentHistoryToken:(id)a0 inContext:(id)a1;
- (id)currentToken;
- (id)initWithPersistentStoreCoordinator:(id)a0 libraryBundle:(id)a1;
- (void).cxx_destruct;

@end
