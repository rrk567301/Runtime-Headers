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
@property (readonly) char hasChangeTrackerToken;

- (void).cxx_destruct;
- (void)disconnect;
- (char)isConnected;
- (id)currentToken;
- (id)_eventsResultFromPersistentHistoryToken:(id)a0 inContext:(id)a1;
- (void)_registerForChangeHandlingNotifications;
- (void)_unregisterForChangeHandlingNotifications;
- (void)_updateLastKnownTokensToToken:(id)a0;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)a0;
- (void)clearToken;
- (char)connectWithContext:(id)a0;
- (id)fetchAllEventsInContext:(id)a0;
- (void)forceTokenToCurrent;
- (id)initWithPersistentStoreCoordinator:(id)a0 libraryBundle:(id)a1;
- (id)lastKnownTokenFromDisk;
- (void)saveLastKnownChangeTrackerTokenToDiskWithContext:(id)a0;
- (void)updateLastKnownTokenToResult:(id)a0;

@end
