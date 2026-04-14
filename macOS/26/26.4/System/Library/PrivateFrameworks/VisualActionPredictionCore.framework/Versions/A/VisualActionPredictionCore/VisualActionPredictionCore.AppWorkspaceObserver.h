@interface VisualActionPredictionCore.AppWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ continuation;
}

- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)databaseWasRebuilt;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationStateDidChange:(id)a0;

@end
