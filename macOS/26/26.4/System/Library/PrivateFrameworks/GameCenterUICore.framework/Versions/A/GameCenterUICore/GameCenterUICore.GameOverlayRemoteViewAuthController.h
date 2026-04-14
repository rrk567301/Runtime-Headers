@interface GameCenterUICore.GameOverlayRemoteViewAuthController : GameCenterUICore.GameOverlayRemoteViewController <GameCenterOverlayService.AuthClientProtocol>

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)exportedInterface;
- (id)initWithCoder:(id)a0;
- (id)serviceViewControllerInterface;
- (void)didFinishOnboardingWithError:(id)a0;

@end
