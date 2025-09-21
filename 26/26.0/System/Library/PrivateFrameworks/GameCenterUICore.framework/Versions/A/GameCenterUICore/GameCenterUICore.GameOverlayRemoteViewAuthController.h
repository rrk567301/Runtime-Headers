@interface GameCenterUICore.GameOverlayRemoteViewAuthController : GameCenterUICore.GameOverlayRemoteViewController <GameCenterOverlayService.AuthClientProtocol>

- (id)exportedInterface;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)serviceViewControllerInterface;
- (void)didFinishOnboardingWithError:(id)a0;

@end
