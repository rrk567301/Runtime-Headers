@interface VisualActionPredictionCore.AppWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ continuation;
}

- (void)applicationStateDidChange:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)databaseWasRebuilt;
- (void).cxx_destruct;
- (id)init;

@end
