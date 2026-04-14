@interface CPKGenmojiListener : NSObject <CPKGenerationUIRemoteProtocol>

+ (id)sharedListener;

- (void)didAddGenerativeEmojiToDatabase:(id)a0;
- (void)didRequestClosingOfGenerationView;
- (void)didRequestDismissal;
- (void)didRequestMixmojiSelect;
- (void)didRequestRestoration;

@end
