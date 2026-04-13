@class EDContentRuleListManager, EDRemoteContentManager, EDMessagePersistence, EDRemoteContentPersistence, EDSearchableIndexManager, EDMailboxPersistence, EDMessageChangeManager, EDGmailLabelPersistence, EMRemoteContentURLCache, EDServerMessagePersistenceFactory, EDPersistenceDatabase, EDLocalActionPersistence, EDRemoteContentCacheConfiguration, EMRemoteContentURLSession, EDConversationPersistence;
@protocol EDAccountsProvider;

@interface MFPersistence_macOS : EDPersistence {
    id<EDAccountsProvider> _accountsProvider;
    EDConversationPersistence *_conversationPersistence;
    EDPersistenceDatabase *_database;
    EDGmailLabelPersistence *_gmailLabelPersistence;
    EDLocalActionPersistence *_localActionPersistence;
    EDMailboxPersistence *_mailboxPersistence;
    EDMessageChangeManager *_messageChangeManager;
    EDMessagePersistence *_messagePersistence;
    EDSearchableIndexManager *_searchableIndexManager;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    EDRemoteContentManager *_remoteContentManager;
    EDRemoteContentPersistence *_remoteContentPersistence;
    EDRemoteContentCacheConfiguration *_remoteContentCacheConfiguration;
    EMRemoteContentURLCache *_remoteContentURLCache;
    EMRemoteContentURLSession *_remoteContentURLSession;
    EDContentRuleListManager *_contentRuleListManager;
}

- (void).cxx_destruct;
- (id)database;
- (id)accountsProvider;
- (void)setAccountsProvider:(id)a0;
- (id)messagePersistence;
- (id)mailboxPersistence;
- (id)conversationPersistence;
- (id)threadPersistence;
- (id)remoteContentPersistence;
- (id)messageChangeManager;
- (id)remoteContentManager;
- (id)remoteContentCacheConfiguration;
- (id)searchableIndexManager;
- (id)diagnosticStringForIndexStatus;
- (id)gmailLabelPersistence;
- (id)localActionPersistence;
- (id)serverMessagePersistenceFactory;
- (id)remoteContentURLSession;
- (id)remoteContentURLCache;
- (void)setRemoteContentURLCache:(id)a0;
- (void)setRemoteContentURLSession:(id)a0;
- (id)contentRuleListManager;
- (id)initWithPropertyMapper:(id)a0;
- (void)_configureSearchableIndexManager;

@end
