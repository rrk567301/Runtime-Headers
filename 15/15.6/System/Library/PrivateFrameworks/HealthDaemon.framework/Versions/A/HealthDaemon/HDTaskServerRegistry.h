@class NSMapTable, NSMutableDictionary, NSMutableSet, HDDaemon;

@interface HDTaskServerRegistry : NSObject {
    NSMutableDictionary *_taskServerClassesByTaskIdentifier;
    NSMapTable *_taskServersByUUID;
    NSMutableDictionary *_taskServerObserversByUUID;
    NSMutableSet *_loadedPluginURLs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0;
- (Class)_taskServerClassForIdentifier:(id)a0;
- (void)addObserver:(id)a0 forTaskServerUUID:(id)a1 queue:(id)a2;
- (id)createTaskServerEndpointForIdentifier:(id)a0 taskUUID:(id)a1 instanceUUID:(id)a2 configuration:(id)a3 client:(id)a4 connectionQueue:(id)a5 error:(id *)a6;
- (void)didCreateTaskServer:(id)a0;
- (char)loadTaskServersFromPluginAtURL:(id)a0 error:(id *)a1;
- (char)registerTaskServerClass:(Class)a0 error:(id *)a1;
- (char)registerTaskServerClasses:(id)a0 error:(id *)a1;
- (char)registerTaskServerClassesWithProvider:(id)a0 error:(id *)a1;
- (void)removeObserver:(id)a0 forTaskServerUUID:(id)a1;
- (void)removeTaskServerObserver:(id)a0;
- (void)taskServerDidInvalidate:(id)a0;
- (id)taskServerForTaskUUID:(id)a0;

@end
