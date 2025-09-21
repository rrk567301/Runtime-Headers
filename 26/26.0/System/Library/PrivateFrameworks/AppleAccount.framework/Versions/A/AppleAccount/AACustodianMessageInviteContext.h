@class NSURL, ACAccount;

@interface AACustodianMessageInviteContext : AAMessagesInviteContext

@property (readonly, nonatomic) ACAccount *appleAccount;
@property (copy, nonatomic) NSURL *messageURL;

- (void).cxx_destruct;
- (id)_messageURLForCustodianID:(id)a0;
- (id)_urlForCustodianID:(id)a0;
- (id)initWithLocalContact:(id)a0 custodianID:(id)a1;
- (id)initWithLocalContact:(id)a0 custodianID:(id)a1 appleAccount:(id)a2;

@end
