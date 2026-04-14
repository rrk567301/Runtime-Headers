@class MFMailboxTransformer;

@interface MFMailboxProvider : EDMailboxProvider

@property (retain, nonatomic) MFMailboxTransformer *mailboxTransformer;

- (id)initWithAccountsProvider:(id)a0;
- (void)_fetchMailboxesForAccount:(id)a0 kind:(long long)a1;
- (void).cxx_destruct;
- (id)_transformMailbox:(id)a0 legacyMailboxToMailboxMap:(id)a1 objectIDToLegacyMailboxMap:(id)a2;

@end
