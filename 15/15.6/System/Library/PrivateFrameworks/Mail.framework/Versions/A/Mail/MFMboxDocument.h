@class NSDateFormatter, NSArray, NSData, NSString, NSMutableSet;
@protocol MCMailbox, MCMailAccount;

@interface MFMboxDocument : NSObject <MCMessageDataSource> {
    NSMutableSet *_uniqueStrings;
}

@property (readonly, copy, nonatomic) NSData *fromSpace;
@property (readonly, copy, nonatomic) NSData *space;
@property (readonly, copy, nonatomic) NSData *newline;
@property (readonly, nonatomic) NSData *headersSeparator;
@property (readonly, nonatomic) NSDateFormatter *ctimeDateFormatter;
@property (readonly, nonatomic) struct { int re_magic; unsigned long long re_nsub; char *re_endp; struct re_guts *re_g; } fromSpaceRegularExpression;
@property (readonly, copy, nonatomic) NSData *mboxData;
@property (readonly, copy, nonatomic) NSData *newlineFromSpace;
@property (readonly, nonatomic) unsigned long long fromSpaceStaticLength;
@property (readonly, copy, nonatomic) NSArray *messagesToExport;
@property (readonly, copy, nonatomic) NSArray *messagesForImporter;
@property (readonly) char isReadOnly;
@property (readonly, nonatomic) char canCompact;
@property (readonly, nonatomic) id<MCMailAccount> account;
@property (readonly, nonatomic) id<MCMailbox> mailbox;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isValidItem:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void)invalidateMessage:(id)a0;
- (id)initWithMessages:(id)a0;
- (id)_dateFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)emptyFileForWritingToURL:(id)a0 error:(id *)a1;
- (id)_escapedMessageDataForMessage:(id)a0;
- (id)_flagChangeDictionaryForJunkMailLevel:(long long)a0 forMessages:(id)a1 userRecorded:(char)a2 changedMessages:(id)a3;
- (void)_mfMboxDocumentCommonInit;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfSeparatorLineInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)async_setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (id)bodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 fetchIfNotAvailable:(char)a2 allowPartial:(char)a3;
- (id)bodyDataForMessage:(id)a0 fetchIfNotAvailable:(char)a1 allowPartial:(char)a2;
- (void)deleteMessages:(id)a0 moveToTrash:(char)a1;
- (void)doCompact;
- (char)exportMessagesToURL:(id)a0 error:(id *)a1;
- (char)exportMessagesToURL:(id)a0 error:(id *)a1 shouldExport:(id /* block */)a2;
- (void)getTopLevelMimePart:(id *)a0 headers:(id *)a1 body:(id *)a2 forMessage:(id)a3 fetchIfNotAvailable:(char)a4 updateFlags:(char)a5 allowPartial:(char)a6 skipSignatureVerification:(char)a7 decodeContext:(id)a8;
- (id)headerDataForMessage:(id)a0 fetchIfNotAvailable:(char)a1 allowPartial:(char)a2;
- (void)messageFlagsDidChange:(id)a0 flags:(id)a1;
- (id)messageForMessageID:(id)a0;
- (void)muteConversationForMessages:(id)a0;
- (id)routeMessages:(id)a0 fetchingBodies:(char)a1 messagesNeedingBodies:(id)a2;
- (void)saveSnippetsForMessages:(id)a0;
- (void)sendResponseType:(char)a0 forMeetingMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)setColor:(id)a0 highlightTextOnly:(char)a1 forMessages:(id)a2;
- (void)setFlagWithKey:(id)a0 state:(char)a1 forMessages:(id)a2;
- (id)setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (id)setJunkMailLevel:(long long)a0 forMessages:(id)a1 trainJunkMailDatabase:(char)a2 userRecorded:(char)a3;
- (void)setNumberOfAttachments:(unsigned int)a0 isSigned:(char)a1 isEncrypted:(char)a2 forMessage:(id)a3;
- (id)setPersistenceConversationFlags:(unsigned long long)a0 forMessages:(id)a1;
- (id)uniquedString:(id)a0;
- (void)unmuteConversationForMessages:(id)a0;

@end
