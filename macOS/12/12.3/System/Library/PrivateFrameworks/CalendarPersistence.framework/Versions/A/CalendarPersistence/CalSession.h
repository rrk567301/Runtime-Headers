@class NSError, NSString, NSManagedObjectID;

@interface CalSession : NSObject <CalNetworkChangeNotificationListener> {
    BOOL _pushActive;
    int _status;
}

@property (retain) NSError *error;
@property int status;
@property double interval;
@property (readonly, retain) NSManagedObjectID *objectID;
@property (retain) NSString *sessionID;

+ (void)persistErrorOnAccount:(id)a0 forPrincipal:(id)a1;
+ (id)defaultUserAgent;
+ (id)knownNonNodeSessionIDs;
+ (void)setDefaultUserAgent:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)synchronize;
- (BOOL)active;
- (BOOL)activate;
- (void)deactivate;
- (void)_schedule;
- (id)initWithObjectID:(id)a0;
- (void)schedule;
- (id)initWithSessionID:(id)a0;
- (void)systemWillSleep;
- (void)systemDidWake;
- (BOOL)isOffline;
- (id)debugInfo;
- (void)synchronizeWithFlags:(long long)a0;
- (void)reactivate;
- (void)goOnline;
- (void)goOffline;
- (void)deletePersistedErrorAndNotify;
- (void)synchronizeDelegatesWithCompletion:(id /* block */)a0;
- (BOOL)updatePushState:(BOOL)a0;
- (id)_newScheduleCriteria;
- (void)timerFiredWithInfo:(id)a0;
- (BOOL)needsSyncDueToTime;
- (void)promptUserIfNeededForError:(id)a0 managedPrincipal:(id)a1;
- (id)managedObjectInContext:(id)a0;
- (void)reschedule;
- (double)timeSinceLastSync;
- (BOOL)needsSync;
- (BOOL)processChangeRequests:(BOOL)a0;
- (BOOL)persistErrorAndNotify;
- (void)systemNetworkDidChange;
- (void)unschedule;
- (void)broadcastStatusUpdate;
- (BOOL)isOfflineOrError;
- (void)operation:(id)a0 didEncounterError:(id)a1;
- (void)setError:(id)a0 status:(int)a1;

@end
