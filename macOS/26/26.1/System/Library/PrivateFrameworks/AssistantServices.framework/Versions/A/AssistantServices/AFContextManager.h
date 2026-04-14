@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    int _notifyToken;
}

+ (id)defaultContextManager;

- (void)_stopListening;
- (void)removeContextProvider:(id)a0;
- (id)_serverName;
- (BOOL)addContextProvider:(id)a0;
- (void)dealloc;
- (void)_collateContextsIntoArray:(id)a0;
- (void)_startListening;
- (id)init;

@end
