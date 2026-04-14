@class NSString, OSSystemExtensionsWorkspaceClient, NSMutableSet;

@interface SystemExtensionsWorkspace : NSObject <_OSSystemExtensionsWorkspaceServerToClientInterface>

@property (retain, nonatomic) OSSystemExtensionsWorkspaceClient *sharedConnection;
@property (retain, nonatomic) NSMutableSet *observers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWorkspace;

- (id)init;
- (void).cxx_destruct;
- (void)_callForEachObserver:(id /* block */)a0;
- (BOOL)addObserver:(id)a0 error:(id *)a1;
- (id)cleanupOrphanedSystemExtensionsWithError:(id *)a0;
- (BOOL)removeObserver:(id)a0 error:(id *)a1;
- (void)systemExtensionActivatedDisabled:(id)a0;
- (void)systemExtensionActivatedEnabled:(id)a0;
- (void)systemExtensionDeactivated:(id)a0;

@end
