@class _TtC9SiriSetup25SiriSetupFollowupProvider;

@interface SRSFollowupProvider : NSObject

@property (readonly, nonatomic) _TtC9SiriSetup25SiriSetupFollowupProvider *followupProvider;

- (void).cxx_destruct;
- (id)init;
- (void)clearFollowupItemsWithCompletion:(id /* block */)a0;
- (void)postFollowupForVoiceProfileRepairWithCompletion:(id /* block */)a0;

@end
