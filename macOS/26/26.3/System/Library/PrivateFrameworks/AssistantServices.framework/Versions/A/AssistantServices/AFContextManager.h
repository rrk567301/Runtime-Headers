@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    int _notifyToken;
}

+ (id)defaultContextManager;

- (void)removeContextProvider:(id)a0;
- (id)init;
- (void)_startListening;
- (BOOL)addContextProvider:(id)a0;
- (void)dealloc;
- (void)_stopListening;
- (void)_collateContextsIntoArray:(id)a0;
- (id)_serverName;

@end
