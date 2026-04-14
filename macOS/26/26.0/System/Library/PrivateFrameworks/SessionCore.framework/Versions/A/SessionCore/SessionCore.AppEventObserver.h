@interface SessionCore.AppEventObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_addedPublisher;
    void /* unknown type, empty encoding */ _addedPublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_removedPublisher;
    void /* unknown type, empty encoding */ _removedPublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_restrictionsChangedPublisher;
    void /* unknown type, empty encoding */ _restrictionsChangedPublisher;
    void /* unknown type, empty encoding */ applicationWorkspace;
    void /* unknown type, empty encoding */ knownClientStore;
    void /* unknown type, empty encoding */ restrictionProviders;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ lock_restrictions;
}

- (void)applicationsDidUninstall:(id)a0;
- (void)dealloc;
- (id)init;
- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;

@end
