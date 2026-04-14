@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    int _notifyToken;
}

+ (id)defaultContextManager;

- (void)dealloc;
- (id)init;
- (void)_startListening;
- (id)_serverName;
- (void)_stopListening;
- (void)_collateContextsIntoArray:(id)a0;
- (BOOL)addContextProvider:(id)a0;
- (void)removeContextProvider:(id)a0;

@end
