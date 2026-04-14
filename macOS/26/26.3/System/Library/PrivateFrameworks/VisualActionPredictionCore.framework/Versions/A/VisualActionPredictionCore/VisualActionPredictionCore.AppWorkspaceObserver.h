@interface VisualActionPredictionCore.AppWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void)databaseWasRebuilt;
- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationStateDidChange:(id)a0;

@end
