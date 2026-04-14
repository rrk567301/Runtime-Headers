@interface _RTCReportingS : NSObject {
    void /* function */ messageLoggingBlock;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ configured;
    void /* unknown type, empty encoding */ connectionManager;
    void /* unknown type, empty encoding */ generatedSessionID;
    void /* unknown type, empty encoding */ sessionInfo;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ deprecatedPeriodic;
    void /* unknown type, empty encoding */ legacyAVCSupport;
    void /* unknown type, empty encoding */ earlyCachedEvents;
    void /* unknown type, empty encoding */ completelyDisabled;
    void /* unknown type, empty encoding */ extraFields;
    void /* unknown type, empty encoding */ terminated;
    void /* unknown type, empty encoding */ sentEventCount;
    void /* unknown type, empty encoding */ activeTasks;
}

@property (nonatomic, copy) id /* block */ messageLoggingBlock;
@property (nonatomic, weak) void /* function */ messageSentDelegate;

+ (void)regeneratePersistentIdentifierForDNU:(BOOL)a0;
+ (BOOL)closeEphemeralSessiontWithSessionId:(id)a0;
+ (BOOL)sendOneMessageWithSessionInfo:(id)a0 userInfo:(id)a1 category:(unsigned short)a2 type:(unsigned short)a3 payload:(id)a4 error:(id *)a5;
+ (id)newHierarchyTokenFromParentToken:(id)a0;
+ (void)updateEarlyCacheLimitWithNewLimit:(long long)a0;
+ (id)createEphemeralSessionWithSessionInfo:(id)a0 userInfo:(id)a1 error:(id *)a2;
+ (id)_privacyLogs:(id *)a0;
+ (id)getPersistentIdentifierForDNU:(BOOL)a0;

- (void)dealloc;
- (void)terminateSessionWithCompletion:(id /* block */)a0;
- (void)stopLogTimer;
- (BOOL)setDigestKey:(id)a0 algorithm:(int)a1;
- (void)flushMessages;
- (id)init;
- (id)initWithSessionInfo:(id)a0 userInfo:(id)a1 frameworksToCheck:(id)a2 aggregationBlock:(id /* block */)a3;
- (void)fetchReportingStatesWithUserInfo:(id)a0 fetchComplete:(id /* block */)a1;
- (BOOL)registerPeriodicTaskForModule:(unsigned int)a0 needToUpdate:(BOOL)a1 needToReport:(BOOL)a2 serviceBlock:(id /* block */)a3;
- (void)unregisterPeriodTaskForModule:(unsigned int)a0;
- (BOOL)uploadDataArray:(id)a0 completionHandler:(id /* block */)a1;
- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (BOOL)sendMessageWithDictionary:(id)a0 error:(id *)a1;
- (void)updateSharedDataWithDictionary:(id)a0;
- (BOOL)uploadFileWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)startLogTimerWithInterval:(int)a0 reportingMultiplier:(int)a1 category:(unsigned short)a2 type:(unsigned short)a3;
- (BOOL)serverSupportsFileUpload;
- (void)startConfigurationWithCompletionHandler:(id /* block */)a0;
- (BOOL)sendMessageWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2 error:(id *)a3;
- (id)getReportingSessionID;
- (void)updateSharedDataForKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)initWithSessionInfo:(id)a0 userInfo:(id)a1 frameworksToCheck:(id)a2;

@end
