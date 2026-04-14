@class NSMapTable;

@interface VGOEMExtensionConnectionBroker : NSObject {
    NSMapTable *_extensionMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) VGOEMExtensionConnectionBroker *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_connectionWithIntent:(id)a0;
- (void)resumeConnectionWithIntent:(id)a0 connectionTimeoutHandler:(id /* block */)a1 connectionErrorHandler:(id /* block */)a2 intentCompletionHandler:(id /* block */)a3;

@end
