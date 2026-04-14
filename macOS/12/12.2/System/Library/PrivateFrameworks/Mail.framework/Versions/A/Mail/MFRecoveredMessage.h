@class NSData, NSString, NSArray, MFMailAccount, NSURL, MFMailbox, MFMessageFileLocations, MCMessageHeaders;

@interface MFRecoveredMessage : MCMessage {
    MCMessageHeaders *_headers;
    NSData *_messageData;
    NSData *_allData;
    NSString *_remoteID;
    id _remoteIDLock;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL includeConversationID;
@property (copy, nonatomic) NSString *remoteMailboxURL;
@property (copy, nonatomic) NSArray *gmailLabelIDs;
@property (nonatomic) BOOL loadedFileData;
@property (copy, nonatomic) NSString *persistentID;
@property (retain, nonatomic) MFMessageFileLocations *fileLocations;
@property (nonatomic) long long conversationID;
@property (readonly, nonatomic) MFMailAccount *account;
@property (readonly, nonatomic) MFMailbox *mailbox;
@property (readonly, nonatomic) BOOL isPartial;

- (id)description;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)path;
- (void)flushCachedData;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (id)messageID;
- (id)_extendedAttributes;
- (id)remoteID;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; })messageColor;
- (id)headersFetchIfNotAvailable:(BOOL)a0;
- (long long)messageFlags;
- (id)bodyFetchIfNotAvailable:(BOOL)a0 updateFlags:(BOOL)a1 allowPartial:(BOOL)a2;
- (id)headerDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)bodyDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)messageDataFetchIfNotAvailable:(BOOL)a0 newDocumentID:(id)a1;
- (id)remoteMailboxURLString;
- (BOOL)setMessageID:(long long)a0 newMessageLocation:(id)a1;
- (id)bodyAndPlainTextAlternative:(id *)a0;
- (id)searchableItemWithHTML:(id)a0 messageBody:(id)a1 updatableAttributesOnly:(BOOL)a2;
- (id)bodyFetchIfNotAvailable:(BOOL)a0 updateFlags:(BOOL)a1 allowPartial:(BOOL)a2 skipSignatureVerification:(BOOL)a3;
- (id)initWithURL:(id)a0 includeConversationID:(BOOL)a1;
- (void)_parseFileData:(id)a0;
- (void)_parseBodyDataWithPList:(id)a0;
- (void)_loadFileDataIfNeeded;
- (id)_messageBodyWithAttachmentData:(BOOL)a0 plainTextAlternative:(id *)a1;
- (id)_plainTextPartForMultipart:(id)a0;

@end
