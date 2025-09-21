@class NSString, NSData, ICNFMCMessage, NSMutableSet;
@protocol ICNFMCMailbox, ICNFMCMailAccount;

@interface ICNFMCMemoryDataSource : NSObject <ICNFMCMessageDataSource> {
    NSMutableSet *_uniqueStrings;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSData *separator;
@property (readonly, nonatomic) ICNFMCMessage *message;
@property (readonly) char isReadOnly;
@property (readonly, nonatomic) char supportsSnippets;
@property (readonly, nonatomic) char canCompact;
@property (readonly, nonatomic) id<ICNFMCMailAccount> account;
@property (readonly, nonatomic) id<ICNFMCMailbox> mailbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)invalidateMessage:(id)a0;
- (id)attachmentsDirectoryForMessage:(id)a0;
- (id)async_setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (id)bodyDataForMessage:(id)a0 fetchIfNotAvailable:(char)a1 allowPartial:(char)a2;
- (void)deleteMessages:(id)a0 moveToTrash:(char)a1;
- (void)doCompact;
- (void)flushAllCaches;
- (id)fullBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1;
- (id)headerDataForMessage:(id)a0 fetchIfNotAvailable:(char)a1 allowPartial:(char)a2;
- (void)messageFlagsDidChange:(id)a0 flags:(id)a1;
- (id)messageForMessageID:(id)a0;
- (id)routeMessages:(id)a0 fetchingBodies:(char)a1 messagesNeedingBodies:(id)a2;
- (void)saveSnippetsForMessages:(id)a0;
- (void)setColor:(id)a0 highlightTextOnly:(char)a1 forMessages:(id)a2;
- (void)setNumberOfAttachments:(unsigned int)a0 isSigned:(char)a1 isEncrypted:(char)a2 forMessage:(id)a3;
- (id)snippetsForMessages:(id)a0;
- (id)uniquedString:(id)a0;
- (id)async_setFlagWithKey:(id)a0 state:(char)a1 forMessages:(id)a2;
- (id)async_setJunkMailLevel:(long long)a0 forMessages:(id)a1 trainJunkMailDatabase:(char)a2 userRecorded:(char)a3;
- (id)bodyForMessage:(id)a0 fetchIfNotAvailable:(char)a1;
- (id)bodyForMessage:(id)a0 fetchIfNotAvailable:(char)a1 updateFlags:(char)a2;
- (id)bodyForMessage:(id)a0 fetchIfNotAvailable:(char)a1 updateFlags:(char)a2 allowPartial:(char)a3;
- (id)dataForMimePart:(id)a0;
- (id)fullBodyDataForMessage:(id)a0;
- (id)fullBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 fetchIfNotAvailable:(char)a2;
- (char)hasCachedDataForMimePart:(id)a0;
- (id)headerDataForMessage:(id)a0;
- (id)headerDataForMessage:(id)a0 fetchIfNotAvailable:(char)a1;
- (id)headersForMessage:(id)a0;
- (id)headersForMessage:(id)a0 fetchIfNotAvailable:(char)a1;
- (void)sendResponseType:(char)a0 forMeetingMessage:(id)a1;
- (void)undeleteMessages:(id)a0;
- (id)undeleteMessages:(id)a0 movedToStore:(id)a1 newMessageIDs:(id)a2;

@end
