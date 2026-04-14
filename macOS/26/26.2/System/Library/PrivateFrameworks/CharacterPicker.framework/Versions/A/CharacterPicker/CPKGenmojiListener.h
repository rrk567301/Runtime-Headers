@interface CPKGenmojiListener : NSObject <CPKGenerationUIRemoteProtocol>

+ (id)sharedListener;

- (void)didAddGenerativeEmojiToDatabase:(id)a0;
- (void)didRequestClosingOfGenerationView;
- (void)didRequestDismissal;
- (void)didRequestDismissalForPresentedWindowNumber:(long long)a0;
- (void)didRequestMixmojiSelect;
- (void)didRequestRestoration;

@end
