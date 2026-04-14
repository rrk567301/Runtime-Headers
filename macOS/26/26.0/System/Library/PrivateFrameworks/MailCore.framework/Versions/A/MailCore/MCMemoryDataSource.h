@class NSString, NSData, MCMessage, MCMessageDecoder, NSMutableSet;
@protocol MCMailbox, MCMailAccount;

@interface MCMemoryDataSource : NSObject <MCMessageDataSource> {
    NSMutableSet *_uniqueStrings;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSData *separator;
@property (readonly, nonatomic) MCMessageDecoder *decoder;
@property (readonly, nonatomic) MCMessage *message;
@property (readonly) BOOL isReadOnly;
@property (readonly, nonatomic) BOOL canCompact;
@property (readonly, nonatomic) id<MCMailAccount> account;
@property (readonly, nonatomic) id<MCMailbox> mailbox;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteMessages:(id)a0 moveToTrash:(BOOL)a1;
- (void)invalidateMessage:(id)a0;
- (void)async_setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)doCompact;
- (id)messageForMessageID:(id)a0;
- (void)unmuteConversationForMessages:(id)a0;
- (id)init;
- (void)muteConversationForMessages:(id)a0;
- (void)getTopLevelMimePart:(id *)a0 headers:(id *)a1 body:(id *)a2 forMessage:(id)a3 fetchIfNotAvailable:(BOOL)a4 updateFlags:(BOOL)a5 allowPartial:(BOOL)a6 skipSignatureVerification:(BOOL)a7 decodeContext:(id)a8;
- (id)setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (void).cxx_destruct;
- (void)saveSnippetsForMessages:(id)a0;
- (id)_flagChangeDictionaryForJunkMailLevel:(long long)a0 forMessages:(id)a1 userRecorded:(BOOL)a2 changedMessages:(id)a3;
- (id)bodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 fetchIfNotAvailable:(BOOL)a2 allowPartial:(BOOL)a3;
- (id)bodyDataForMessage:(id)a0 fetchIfNotAvailable:(BOOL)a1 allowPartial:(BOOL)a2;
- (id)headerDataForMessage:(id)a0 fetchIfNotAvailable:(BOOL)a1 allowPartial:(BOOL)a2;
- (void)messageFlagsDidChange:(id)a0 flags:(id)a1;
- (id)routeMessages:(id)a0 fetchingBodies:(BOOL)a1 messagesNeedingBodies:(id)a2 shouldForceEvaluatingRules:(BOOL)a3;
- (void)sendResponseType:(char)a0 forMeetingMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)setColor:(id)a0 highlightTextOnly:(BOOL)a1 forMessages:(id)a2;
- (void)setFlagWithKey:(id)a0 state:(BOOL)a1 forMessages:(id)a2;
- (id)setJunkMailLevel:(long long)a0 forMessages:(id)a1 trainJunkMailDatabase:(BOOL)a2 userRecorded:(BOOL)a3;
- (void)setNumberOfAttachments:(unsigned int)a0 isSigned:(BOOL)a1 isEncrypted:(BOOL)a2 forMessage:(id)a3;
- (id)setPersistenceConversationFlags:(unsigned long long)a0 forMessages:(id)a1;
- (id)uniquedString:(id)a0;
- (id)initWithData:(id)a0 decoder:(id)a1;

@end
