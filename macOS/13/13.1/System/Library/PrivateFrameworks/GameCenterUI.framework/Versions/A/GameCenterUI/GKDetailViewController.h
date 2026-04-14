@interface GKDetailViewController : GKDashboardCollectionViewController

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)composeController:(id)a0 didFinishWithMessage:(id)a1;
- (void)composeControllerWasCancelled:(id)a0;
- (void)doneWithComposeController;
- (id)composeController;
- (void)setComposeController:(id)a0;
- (void)reportProblemFromSettingsAboutPlayer:(id)a0;
- (void)reportProblemAboutPlayer:(id)a0;
- (void)reportProblemAboutPlayer:(id)a0 fromSettings:(BOOL)a1;
- (void)showComposeController:(id)a0;
- (void)shareAchievement:(id)a0 sendingView:(id)a1;
- (void)shareScore:(id)a0 fromLeaderboard:(id)a1 sendingView:(id)a2;

@end
