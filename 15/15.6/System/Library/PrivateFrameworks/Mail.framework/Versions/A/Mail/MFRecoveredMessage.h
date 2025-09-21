@class NSData, NSString, NSArray, MFMailAccount, NSURL, MFMailbox, MFMessageFileLocations, MCMessageHeaders;

@interface MFRecoveredMessage : MCMessage {
    MCMessageHeaders *_headers;
    NSData *_messageData;
    NSData *_allData;
    NSString *_remoteID;
    id _remoteIDLock;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) char includeConversationID;
@property (copy, nonatomic) NSString *remoteMailboxURL;
@property (copy, nonatomic) NSArray *gmailLabelIDs;
@property (nonatomic) char loadedFileData;
@property (copy, nonatomic) NSString *persistentID;
@property (retain, nonatomic) MFMessageFileLocations *fileLocations;
@property (nonatomic) long long conversationID;
@property (readonly, nonatomic) MFMailAccount *account;
@property (readonly, nonatomic) MFMailbox *mailbox;
@property (readonly, nonatomic) char isPartial;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)path;
- (void)flushCachedData;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (id)messageID;
- (id)remoteID;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; })messageColor;
- (void)_parseFileData:(id)a0;
- (id)_extendedAttributes;
- (void)_loadFileDataIfNeeded;
- (id)_messageBodyWithAttachmentData:(char)a0 plainTextAlternative:(id *)a1;
- (void)_parseBodyDataWithPList:(id)a0;
- (id)_plainTextPartForMultipart:(id)a0;
- (id)bodyAndPlainTextAlternative:(id *)a0;
- (id)bodyDataFetchIfNotAvailable:(char)a0 allowPartial:(char)a1;
- (id)bodyFetchIfNotAvailable:(char)a0 updateFlags:(char)a1 allowPartial:(char)a2;
- (id)bodyFetchIfNotAvailable:(char)a0 updateFlags:(char)a1 allowPartial:(char)a2 skipSignatureVerification:(char)a3;
- (id)headerDataFetchIfNotAvailable:(char)a0 allowPartial:(char)a1;
- (id)headersFetchIfNotAvailable:(char)a0;
- (id)initWithURL:(id)a0 includeConversationID:(char)a1;
- (id)messageDataFetchIfNotAvailable:(char)a0 newDocumentID:(id)a1;
- (long long)messageFlags;
- (id)remoteMailboxURLString;
- (id)searchableItemWithHTML:(id)a0 messageBody:(id)a1 updatableAttributesOnly:(char)a2;
- (char)setMessageID:(long long)a0 newMessageLocation:(id)a1;

@end
