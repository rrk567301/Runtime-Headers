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

- (void).cxx_destruct;
- (void)disconnect;
- (BOOL)connect;
- (BOOL)isConnected;
- (id)initWithPersistentStoreCoordinator:(id)a0;
- (id)currentToken;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)forceTokenToCurrent;
- (void)clearToken;
- (id)fetchAllEventsInContext:(id)a0;
- (void)updateLastKnownTokenToResult:(id)a0;
- (void)_registerForChangeHandlingNotifications;
- (id)lastKnownTokenFromDisk;
- (void)_unregisterForChangeHandlingNotifications;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)a0;
- (id)_eventsResultFromPersistentHistoryToken:(id)a0 inContext:(id)a1;
- (void)_updateLastKnownTokensToToken:(id)a0;

@end
