@interface UserNotificationsCore.NotificationSourceMonitorLSObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSCacheDelegate> {
    void /* unknown type, empty encoding */ workspace;
    void /* unknown type, empty encoding */ delegateQueue;
    void /* unknown type, empty encoding */ delegate;
}

- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;

@end
