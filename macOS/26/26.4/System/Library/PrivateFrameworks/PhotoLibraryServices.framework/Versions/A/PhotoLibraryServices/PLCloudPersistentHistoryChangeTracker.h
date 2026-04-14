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
- (void)updateLastKnownTokenToResult:(id)a0;
- (BOOL)isConnected;
- (id)initWithPersistentStoreCoordinator:(id)a0 libraryBundle:(id)a1;
- (id)lastKnownTokenFromDisk;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)a0;
- (BOOL)connectWithContext:(id)a0;
- (void)_unregisterForChangeHandlingNotifications;
- (void)_updateLastKnownTokensToToken:(id)a0;
- (void).cxx_destruct;
- (void)forceTokenToCurrent;
- (id)_eventsResultFromPersistentHistoryToken:(id)a0 inContext:(id)a1;
- (void)_registerForChangeHandlingNotifications;
- (void)clearToken;
- (void)saveLastKnownChangeTrackerTokenToDiskWithContext:(id)a0;
- (id)fetchAllEventsInContext:(id)a0;
- (id)currentToken;

@end
