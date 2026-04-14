@interface IMDSpamMessageCreator : NSObject

- (BOOL)hasDataDetectedInformalPayment:(id)a0;
- (void)_addSnapNameKeysToReportMessageDictionary:(id)a0 forSender:(id)a1;
- (id)_createJunkMessageDictionaryForItem:(id)a0 senderURI:(id)a1 chat:(id)a2 conversationID:(id)a3 receiverURI:(id)a4 notifyInternalSecurity:(BOOL)a5 reportReason:(unsigned long long)a6;
- (BOOL)_isMessageMMS:(id)a0 forChat:(id)a1;
- (id)_receiverURIWithItem:(id)a0 chat:(id)a1;
- (void)_reportToIDSTextMessageSpam:(id)a0;
- (void)_reportToIDSiMessageSpam:(id)a0 maxMessagesPerReport:(unsigned long long)a1;
- (id)_senderURIWithItem:(id)a0 chat:(id)a1;
- (BOOL)_textMessageReportToIDSAllowedForMessageItem:(id)a0 chat:(id)a1 notifyInternalSecurity:(BOOL)a2;
- (void)addTextMessageJunkKeysToReportMessageDictionary:(id)a0 forMessage:(id)a1 chat:(id)a2;
- (void)addiMessageJunkKeysToReportMessageDictionary:(id)a0 forMessage:(id)a1 withGUID:(id)a2 contentLength:(unsigned long long)a3 chat:(id)a4;
- (BOOL)isSurfPayment:(id)a0;
- (id)metaDataForSurfURL:(id)a0;
- (void)reportMessageDictionariesForMessages:(id)a0 isAutoReport:(BOOL)a1 withChat:(id)a2 conversationID:(id)a3 maxMessagesToReport:(unsigned long long)a4 totalMessageCount:(unsigned long long *)a5 notifyInternalSecurity:(BOOL)a6 isJunkReportedToCarrier:(BOOL)a7 reportReason:(unsigned long long)a8;
- (void)reportMessageDictionaryToApple:(id)a0 forChat:(id)a1 isJunk:(BOOL)a2;
- (void)reportNotJunkToTrustKitForMessageGUID:(id)a0;
- (void)reportUnknownToIDS:(id)a0 messageID:(id)a1 isBlackholed:(BOOL)a2 isiMessageJunk:(BOOL)a3 messageServerTimestamp:(id)a4 toURI:(id)a5;
- (id)surfURLForIMMessageItem:(id)a0;
- (id)transferForGuid:(id)a0;

@end
