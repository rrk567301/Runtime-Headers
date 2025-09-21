@interface IMDSpamMessageCreator : NSObject

- (char)hasDataDetectedInformalPayment:(id)a0;
- (void)_addSnapNameKeysToReportMessageDictionary:(id)a0 forSender:(id)a1;
- (id)_correctURI:(id)a0 withChat:(id)a1;
- (char)_isMessageMMS:(id)a0 forChat:(id)a1;
- (void)_reportToIDSTextMessageSpam:(id)a0;
- (void)_reportToIDSiMessageSpam:(id)a0;
- (char)_textMessageReportToIDSAllowedForMessageItem:(id)a0 chat:(id)a1 notifyInternalSecurity:(char)a2;
- (void)addTextMessageJunkKeysToReportMessageDictionary:(id)a0 forMessage:(id)a1 chat:(id)a2 receiverURI:(id)a3;
- (void)addiMessageJunkKeysToReportMessageDictionary:(id)a0 forMessage:(id)a1 withGUID:(id)a2 contentLength:(unsigned long long)a3 chat:(id)a4;
- (char)isSurfPayment:(id)a0;
- (id)metaDataForSurfURL:(id)a0;
- (void)reportMessageDictionariesForMessages:(id)a0 withLastAddressedHandle:(id)a1 maxMessageLength:(unsigned long long)a2 isAutoReport:(char)a3 withChat:(id)a4 maxMessagesToReport:(unsigned long long)a5 totalMessageCount:(unsigned long long *)a6 notifyInternalSecurity:(char)a7 isJunkReportedToCarrier:(char)a8 reportReason:(unsigned long long)a9;
- (void)reportMessageDictionaryToApple:(id)a0 forChat:(id)a1;
- (void)reportUnknownToIDS:(id)a0 messageID:(id)a1 isBlackholed:(char)a2 isiMessageJunk:(char)a3 messageServerTimestamp:(id)a4 toURI:(id)a5;
- (id)surfURLForIMMessageItem:(id)a0;
- (id)transferForGuid:(id)a0;

@end
