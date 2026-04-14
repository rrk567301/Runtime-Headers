@class NSMutableSet, NSString, NSDictionary, NSUUID, NSDate, NSMutableDictionary, IASSessionManager;

@interface IASTextInputActionsAnalyzer : NSObject <IASAnalyzerProtocol> {
    NSMutableDictionary *_entries;
    BOOL _sessionIsModeless;
    NSMutableSet *_sessionErrors;
    unsigned long long _largestSessionInsertionLength;
    unsigned long long _largestSessionDeletionLength;
    long long _sessionNetCharacters;
    BOOL _insertionObservedInSession;
    unsigned long long _charsRemovedBeforeFirstInsertionCount;
    unsigned long long _emojisRemovedBeforeFirstInsertionCount;
    NSString *_name;
    NSString *_mostRecentAppBundleId;
    NSString *_mostRecentProcessId;
}

@property (copy, nonatomic) NSDate *dateOfLastAction;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) NSDictionary *keyboardTrialParameters;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } depthRange;
@property (copy, nonatomic) NSUUID *analyzerSessionId;
@property (weak, nonatomic) IASSessionManager *sessionManagerDelegate;

+ (id)getOrInitializeArrayFromArray:(id)a0 forKey:(unsigned long long)a1 initCapacity:(unsigned long long)a2;
+ (id)getOrInitializeArrayFromDictionary:(id)a0 forKey:(id)a1 initCapacity:(unsigned long long)a2;
+ (id)getOrInitializeDictionaryFrom:(id)a0 forKey:(unsigned long long)a1 initCapacity:(long long)a2;
+ (id)analyzerWithName:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (id)cleanIdForPublishing:(id)a0;
- (id)computeSessionActionsStringOnSession:(id)a0;
- (void)enumerateTextInputActionsAnalytics:(id /* block */)a0;
- (id)generateSessionErrorStringFromSet:(id)a0;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)logErrorCodeIfNotNil:(id)a0;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (void)increaseCountForAppBundleId:(id)a0 forSource:(long long)a1 forActionType:(long long)a2 forFlagOptions:(long long)a3 forInputModeKey:(id)a4 byAnalyzerEntry:(id)a5;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 eventHandler:(id /* block */)a2;
- (BOOL)shouldBeGarbageCollected;

@end
