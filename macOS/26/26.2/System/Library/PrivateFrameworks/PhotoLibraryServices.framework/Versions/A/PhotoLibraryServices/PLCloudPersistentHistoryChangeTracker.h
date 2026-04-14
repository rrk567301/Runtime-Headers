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
- (BOOL)isConnected;
- (BOOL)connectWithContext:(id)a0;
- (id)_eventsResultFromPersistentHistoryToken:(id)a0 inContext:(id)a1;
- (void)forceTokenToCurrent;
- (void)_unregisterForChangeHandlingNotifications;
- (id)fetchAllEventsInContext:(id)a0;
- (void)_updateLastKnownTokensToToken:(id)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 libraryBundle:(id)a1;
- (void).cxx_destruct;
- (id)currentToken;
- (void)updateLastKnownTokenToResult:(id)a0;
- (id)lastKnownTokenFromDisk;
- (void)_registerForChangeHandlingNotifications;
- (void)saveLastKnownChangeTrackerTokenToDiskWithContext:(id)a0;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)a0;
- (void)clearToken;

@end
