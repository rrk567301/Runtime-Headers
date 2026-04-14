@class EDServerMessagePersistenceFactory, EDRemoteContentManager, MEContentRuleListManager, EMRemoteContentURLCache, EDMailboxPersistence, EDRemoteContentPersistence, EDSearchableIndexManager, EDPersistenceDatabase, EDGmailLabelPersistence, EDMessageChangeManager, EDRemoteContentCacheConfiguration, EDMessagePersistence, EDRemindMeNotificationController, EDReadLaterPersistence, EDConversationPersistence, EDRichLinkPersistence, EDDataDetectionPersistence, EMRemoteContentURLSession, EDVIPManager, EDBIMIManager, EDSenderPersistence, EDLocalActionPersistence, EDMailboxActionPersistence;
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
    EDSenderPersistence *_senderPersistence;
    EDSearchableIndexManager *_searchableIndexManager;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    EDRemoteContentManager *_remoteContentManager;
    EDRemoteContentPersistence *_remoteContentPersistence;
    EDRemoteContentCacheConfiguration *_remoteContentCacheConfiguration;
    EMRemoteContentURLCache *_remoteContentURLCache;
    EMRemoteContentURLSession *_remoteContentURLSession;
    EDRichLinkPersistence *_richLinkPersistence;
    MEContentRuleListManager *_contentRuleListManager;
    EDReadLaterPersistence *_readLaterPersistence;
    EDDataDetectionPersistence *_dataDetectionPersistence;
    EDMailboxActionPersistence *_mailboxActionPersistence;
    EDBIMIManager *_bimiManager;
    EDRemindMeNotificationController *_remindMeNotificationController;
    EDVIPManager *_vipManager;
}

- (void).cxx_destruct;
- (id)database;
- (id)serverMessagePersistenceFactory;
- (id)remoteContentCacheConfiguration;
- (id)accountsProvider;
- (id)bimiManager;
- (id)contentRuleListManager;
- (id)conversationPersistence;
- (id)dataDetectionPersistence;
- (id)gmailLabelPersistence;
- (id)localActionPersistence;
- (id)mailboxActionPersistence;
- (id)mailboxPersistence;
- (id)messageChangeManager;
- (id)messagePersistence;
- (id)persistenceStatistics;
- (id)readLaterPersistence;
- (id)remindMeNotificationController;
- (id)remoteContentManager;
- (id)remoteContentPersistence;
- (id)remoteContentURLCache;
- (id)remoteContentURLSession;
- (id)richLinkPersistence;
- (id)searchableIndexManager;
- (id)searchableIndexStatistics;
- (id)senderPersistence;
- (void)setAccountsProvider:(id)a0;
- (void)setRemoteContentURLCache:(id)a0;
- (void)setRemoteContentURLSession:(id)a0;
- (void)setVipManager:(id)a0;
- (id)threadPersistence;
- (id)vipManager;
- (void)_configureSearchableIndexManager;
- (id)initWithPropertyMapper:(id)a0;

@end
