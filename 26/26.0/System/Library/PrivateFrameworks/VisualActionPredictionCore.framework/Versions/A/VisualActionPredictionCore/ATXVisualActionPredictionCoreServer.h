@interface ATXVisualActionPredictionCoreServer : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ serviceListener;
    void /* unknown type, empty encoding */ resourceManager;
    void /* unknown type, empty encoding */ executionResourceRetrievalListener;
    void /* unknown type, empty encoding */ featureConfiguration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_linkManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_vectorDatabase;
    void /* unknown type, empty encoding */ $__lazy_storage_$_engagementStream;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remoteCustomActionProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remoteCustomActionExecutor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemToolActionProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemToolActionExecutor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_linkActionProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_LinkActionExecutor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visualSearchActionProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visualSearchActionExecutor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_openEntityExecutor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionEligibilityChecker;
    void /* unknown type, empty encoding */ sessionMap;
    void /* unknown type, empty encoding */ transactionMap;
}

- (void)dealloc;
- (id)init;
- (void)activate;
- (void).cxx_destruct;

@end
