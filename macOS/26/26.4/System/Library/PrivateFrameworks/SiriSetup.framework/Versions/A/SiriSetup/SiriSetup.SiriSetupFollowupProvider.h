@class _TtC9SiriSetup23CoreFollowupIdentifiers, NSURL;

@interface SiriSetup.SiriSetupFollowupProvider : NSObject

@property (nonatomic, readonly) _TtC9SiriSetup23CoreFollowupIdentifiers *identifiers;
@property (nonatomic, readonly) NSURL *buddySetupFlowURL;

- (id)initWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearFollowupItemsWithCompletion:(id /* block */)a0;
- (void)postFollowupForVoiceProfileRepairWithCompletion:(id /* block */)a0;

@end
