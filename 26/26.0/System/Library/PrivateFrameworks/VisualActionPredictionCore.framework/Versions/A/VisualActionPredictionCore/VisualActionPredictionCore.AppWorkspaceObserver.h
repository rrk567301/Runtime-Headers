@interface VisualActionPredictionCore.AppWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ continuation;
}

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationStateDidChange:(id)a0;
- (id)init;
- (void)applicationsDidInstall:(id)a0;
- (void)databaseWasRebuilt;
- (void).cxx_destruct;

@end
