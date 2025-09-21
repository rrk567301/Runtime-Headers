@class NSLock, NSHashTable, NSWorkspace;

@interface NSWorkspaceNotificationCenter : NSNotificationCenter {
    NSWorkspace *_workspace;
    NSLock *_workspaceLock;
    struct NSWorkspaceNotificationCenterSubsystemContext_t { id token; } _subsystemContexts[19];
    NSHashTable *_notificationObservers[24];
}

- (void)dealloc;
- (id)addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (void)_destroyAllUnobservedSubsystems;
- (void)_accessibilityDisplaySettingsDidChange:(id)a0;
- (void)_addOrRemoveObserver:(id)a0 forName:(id)a1 isAdding:(char)a2;
- (void)_addOrRemoveObserverForAllNotifications:(id)a0 isAdding:(char)a1;
- (char)_checkForObserversOfSubsystem:(int)a0;
- (void)_createSubsystemIfNecessary:(int)a0;
- (char)_destroySubsystemIfUnobserved:(int)a0;
- (void)_systemDidChangeAppearance:(id)a0;
- (void)_workspaceDidBecomeActive:(id)a0;
- (void)_workspaceDidResignActive:(id)a0;
- (void)_workspaceDidResignOrBecomeActive:(id)a0;
- (unsigned int)connectionID;
- (char)hasObserversForNotificationName:(id)a0;
- (id)initWithWorkspace:(id)a0;
- (id)workspace;

@end
