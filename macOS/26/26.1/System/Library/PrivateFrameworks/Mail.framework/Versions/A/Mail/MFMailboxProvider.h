@class MFMailboxTransformer;

@interface MFMailboxProvider : EDMailboxProvider

@property (retain, nonatomic) MFMailboxTransformer *mailboxTransformer;

- (void)_fetchMailboxesForAccount:(id)a0 kind:(long long)a1;
- (id)_transformMailbox:(id)a0 legacyMailboxToMailboxMap:(id)a1 objectIDToLegacyMailboxMap:(id)a2;
- (id)initWithAccountsProvider:(id)a0;
- (void).cxx_destruct;

@end
