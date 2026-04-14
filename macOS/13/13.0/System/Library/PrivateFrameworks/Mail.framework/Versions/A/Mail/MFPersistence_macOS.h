@class EDServerMessagePersistenceFactory, EDRemoteContentManager, MEContentRuleListManager, EMRemoteContentURLCache, EDMailboxPersistence, EDRemoteContentPersistence, EDSearchableIndexManager, EDPersistenceDatabase, EDGmailLabelPersistence, EDMessageChangeManager, EDRemoteContentCacheConfiguration, EDMessagePersistence, EDRemindMeNotificationController, EDReadLaterPersistence, EDConversationPersistence, EDRichLinkPersistence, EDDataDetectionPersistence, EMRemoteContentURLSession, EDVIPManager, EDBIMIManager, EDSenderPersistence, EDLocalActionPersistence, EDSendLaterPersistence, EDMailboxActionPersistence;
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
    EDSendLaterPersistence *_sendLaterPersistence;
    EDRemindMeNotificationController *_remindMeNotificationController;
    EDVIPManager *_vipManager;
}

- (void).cxx_destruct;
- (id)database;
- (id)accountsProvider;
- (void)setAccountsProvider:(id)a0;
- (id)messagePersistence;
- (id)vipManager;
- (id)mailboxPersistence;
- (id)gmailLabelPersistence;
- (id)localActionPersistence;
- (id)readLaterPersistence;
- (id)serverMessagePersistenceFactory;
- (id)bimiManager;
- (id)persistenceStatistics;
- (id)remindMeNotificationController;
- (id)conversationPersistence;
- (id)threadPersistence;
- (id)remoteContentPersistence;
- (id)richLinkPersistence;
- (id)messageChangeManager;
- (id)remoteContentManager;
- (id)remoteContentCacheConfiguration;
- (id)sendLaterPersistence;
- (id)dataDetectionPersistence;
- (id)searchableIndexManager;
- (id)mailboxActionPersistence;
- (id)senderPersistence;
- (void)setVipManager:(id)a0;
- (id)remoteContentURLCache;
- (void)setRemoteContentURLCache:(id)a0;
- (id)remoteContentURLSession;
- (void)setRemoteContentURLSession:(id)a0;
- (id)contentRuleListManager;
- (id)initWithPropertyMapper:(id)a0;
- (void)_configureSearchableIndexManager;

@end
