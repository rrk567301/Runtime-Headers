@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface IATextInputActionsAccumulator : NSObject {
    NSMutableDictionary *_entries;
    BOOL _sessionIsModeless;
    NSMutableSet *_sessionErrors;
    NSString *_mostRecentProcessId;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } depthRange;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) NSDictionary *keyboardTrialParameters;

+ (id)accumulatorWithName:(id)a0;
+ (id)getOrInitializeArrayFromArray:(id)a0 forKey:(unsigned long long)a1 initCapacity:(unsigned long long)a2;
+ (id)getOrInitializeArrayFromDictionary:(id)a0 forKey:(id)a1 initCapacity:(unsigned long long)a2;
+ (id)getOrInitializeDictionaryFrom:(id)a0 forKey:(unsigned long long)a1 initCapacity:(long long)a2;

- (void).cxx_destruct;
- (void)reset;
- (id)cleanIdForPublishing:(id)a0;
- (id)computeSessionActionsStringOnSession:(id)a0;
- (void)enumerateTextInputActionsAnalytics:(id /* block */)a0;
- (id)generateSessionErrorStringFromSet:(id)a0;
- (void)increaseCountForAppBundleId:(id)a0 forSource:(long long)a1 forActionType:(long long)a2 forFlagOptions:(long long)a3 forInputModeKey:(id)a4 byAccumulatorEntry:(id)a5;
- (void)logErrorCodeIfNotNil:(id)a0;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)consumeAction:(id)a0;
- (void)enumerateTextInputActionsAnalytics;

@end
