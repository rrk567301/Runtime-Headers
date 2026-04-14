@class NSURL;

@interface AAInheritanceMessageInviteContext : AAMessagesInviteContext

@property (copy, nonatomic) NSURL *messageURL;

- (void).cxx_destruct;
- (id)_messageURLForBeneficiaryID:(id)a0;
- (id)initWithLocalContact:(id)a0 beneficiaryID:(id)a1;

@end
