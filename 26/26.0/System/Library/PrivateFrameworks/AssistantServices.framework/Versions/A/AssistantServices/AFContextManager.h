@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    int _notifyToken;
}

+ (id)defaultContextManager;

- (void)dealloc;
- (void)_collateContextsIntoArray:(id)a0;
- (id)init;
- (id)_serverName;
- (void)_stopListening;
- (void)_startListening;
- (void)removeContextProvider:(id)a0;
- (BOOL)addContextProvider:(id)a0;

@end
