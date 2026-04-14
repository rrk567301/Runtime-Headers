@interface GameCenterUI.GameCenterViewControllerOverlay : NSObject <GameCenterOverlayService.DashboardDelegate> {
    void /* unknown type, empty encoding */ clientProxy;
    void /* unknown type, empty encoding */ viewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)finishWith:(id)a0;
- (void)didDismissDashboard;
- (void)finishAndPlay:(id)a0;
- (void)quitTurnBasedMatch:(id)a0;

@end
