@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    int _notifyToken;
}

+ (id)defaultContextManager;

- (void)_collateContextsIntoArray:(id)a0;
- (void)_stopListening;
- (id)_serverName;
- (void)_startListening;
- (id)init;
- (void)removeContextProvider:(id)a0;
- (BOOL)addContextProvider:(id)a0;
- (void)dealloc;

@end
