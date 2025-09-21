@interface UserNotificationsCore.NotificationSourceMonitorLSObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSCacheDelegate> {
    void /* unknown type, empty encoding */ workspace;
    void /* unknown type, empty encoding */ delegateQueue;
    void /* unknown type, empty encoding */ delegate;
}

- (void)applicationsDidUninstall:(id)a0;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)init;
- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;

@end
