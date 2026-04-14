@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    int _notifyToken;
}

+ (id)defaultContextManager;

- (void)_startListening;
- (void)removeContextProvider:(id)a0;
- (id)_serverName;
- (void)_stopListening;
- (BOOL)addContextProvider:(id)a0;
- (void)_collateContextsIntoArray:(id)a0;
- (id)init;
- (void)dealloc;

@end
