@class NSCountedSet, FBWorkspaceConnectionsStateStore, FBWorkspaceDomain, NSDictionary, NSMutableDictionary, NSMapTable, FBMutableWorkspaceConnectionsState;

@interface FBWorkspaceEventDispatcher : NSObject {
    FBWorkspaceDomain *_domain;
    FBWorkspaceConnectionsStateStore *_store;
    NSDictionary *_preregisteredWorkspaces;
    NSMutableDictionary *_lock_sourcesByPidNumber;
    NSMapTable *_lock_targetsByIdentifier;
    NSCountedSet *_main_incompleteTargetRegistrations;
    NSMutableDictionary *_lock_restartAssertionsByPidNumber;
    FBMutableWorkspaceConnectionsState *_lock_mutableState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
