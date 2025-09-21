@class NSURL;

@interface AACustodianMessageInviteContext : AAMessagesInviteContext

@property (readonly, nonatomic) char upsell;
@property (copy, nonatomic) NSURL *messageURL;

- (void).cxx_destruct;
- (id)_messageURLForCustodianID:(id)a0;
- (id)_urlForCustodianID:(id)a0;
- (id)initWithLocalContact:(id)a0 custodianID:(id)a1;
- (id)initWithLocalContact:(id)a0 custodianID:(id)a1 upsell:(char)a2;

@end
