@class NSString, BSServiceDispatchQueue, NSMapTable, FBSDisplayLayout, BSServiceConnection, BSServiceConnectionEndpoint;

@interface _FBSDisplayLayoutService : NSObject <BSInvalidatable, FBSDisplayLayoutMonitorClientInterface> {
    BSServiceConnectionEndpoint *_endpoint;
    BSServiceDispatchQueue *_callOutQueue;
    BSServiceConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_lock_keyedObservers;
    FBSDisplayLayout *_lock_layout;
    unsigned long long _lock_layoutGeneration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_noteDisconnected;
- (void)dealloc;
- (id)currentLayout;
- (void)addObserver:(id /* block */)a0 forKey:(id)a1;
- (void)invalidate;
- (void)removeObserverForKey:(id)a0;
- (id)endpoint;
- (id)_initWithEndpoint:(id)a0 qos:(char)a1;
- (oneway void)updateLayout:(id)a0 withTransition:(id)a1;
- (void).cxx_destruct;

@end
