@interface TTRBannerControllerInternal : NSObject <TTRBannerControllerProtocol>

@property (nonatomic, weak) void /* function */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)showHoldAssistTTRBannerForCall:(id)a0;
- (void)buildTTRMessageBubbleRecipientsListWithGroupMessageUUID:(id)a0 with:(id)a1;
- (void)showTTRBannerWithFullLogArchive:(BOOL)a0 call:(id)a1;

@end
