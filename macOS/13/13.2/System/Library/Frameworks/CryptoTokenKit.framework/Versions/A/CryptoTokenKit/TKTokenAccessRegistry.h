@protocol TKTokenAccessDB, TKTokenAccessUserPrompt;

@interface TKTokenAccessRegistry : NSObject {
    id<TKTokenAccessDB> _accessDB;
    id<TKTokenAccessUserPrompt> _prompt;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccessDB:(id)a0 userPrompt:(id)a1;
- (BOOL)evaluateRequest:(id)a0 error:(id *)a1;
- (BOOL)_shouldAutomaticallyAllowRequest:(id)a0;
- (BOOL)_platformAllowsAllRequests;
- (long long)_promptUserToEvaluateRequest:(id)a0 error:(id *)a1;
- (long long)_fetchAccessForRequest:(id)a0;
- (void)_storeAccess:(long long)a0 forRequest:(id)a1;
- (BOOL)_isPersistenceEnabled;
- (void)setUserPrompt:(id)a0;
- (void)setAccessDB:(id)a0;

@end
