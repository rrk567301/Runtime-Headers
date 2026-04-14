@class NSObject, NSString, BMSource, NSMutableSet, CSSuggestion, BMStream;
@protocol OS_os_log, OS_dispatch_queue;

@interface EMMailSearchUIBiomeLogger : NSObject <EFLoggable>

@property (class, readonly, nonatomic) EMMailSearchUIBiomeLogger *sharedInstance;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) BMStream *stream;
@property (retain, nonatomic) BMSource *source;
@property (copy, nonatomic) NSString *currentUUID;
@property (retain, nonatomic) NSMutableSet *windowsLoggedDimensionForCurrentUUID;
@property (retain, nonatomic) NSMutableSet *windowsWithInputSinceAppeared;
@property long long currentQueryID;
@property (retain, nonatomic) CSSuggestion *currentSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)_donateToBiome:(id)a0;
- (id)_createDimensionContext;
- (void)_ensureSessionForWindowId:(long long)a0 isInSearchView:(BOOL)a1;
- (id)_eventTypeNameFromType:(long long)a0;
- (void)_handleSessionIdRotationForWindowId:(long long)a0 oldUUID:(id)a1 newUUID:(id)a2 isInSearchView:(BOOL)a3;
- (long long)_incrementAndSaveQueryId;
- (id)_loadOrCreateUUID;
- (long long)_loadQueryId;
- (void)_logDimensionContextForWindowId:(long long)a0;
- (void)_logEventWithType:(long long)a0 windowId:(long long)a1 configureBlock:(id /* block */)a2;
- (void)_logSessionEndedWithSessionId:(id)a0 windowId:(long long)a1 isInSearchView:(BOOL)a2;
- (void)_logSessionStartedForWindowId:(long long)a0 isInSearchView:(BOOL)a1;
- (void)_resetQueryId;
- (id)_rotatingUUIDComponent;
- (id)_rotatingUUIDComponentWithDidRotate:(BOOL *)a0;
- (void)_saveQueryId:(long long)a0;
- (id)_sessionIdWithUUID:(id)a0 windowId:(long long)a1;
- (void)logDisplayEndedForWindowId:(long long)a0 messages:(id)a1 reason:(int)a2;
- (void)logDisplayStartedForWindowId:(long long)a0 messages:(id)a1 reason:(int)a2;
- (void)logInputDetectedForWindowId:(long long)a0 suggestion:(id)a1 isZkw:(BOOL)a2 mailScope:(int)a3;
- (void)logResultReceivedWithSections:(id)a0 windowId:(long long)a1;
- (void)logSearchViewAppearedWithReason:(int)a0 windowId:(long long)a1;
- (void)logSearchViewDisappearedWithReason:(int)a0 windowId:(long long)a1;
- (void)logUserInteractionForWindowId:(long long)a0 message:(id)a1 interactionType:(int)a2;
- (id)sessionIDForWindowID:(long long)a0;

@end
