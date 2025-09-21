@class NSEnumerator, ICNFMCMimePart, NSString, NSData, ICNFMCParsedMessage;

@interface ICNFMCMimeBody : ICNFMCMessageBody {
    ICNFMCMimePart *_topLevelPart;
    NSData *_bodyData;
}

@property (retain, nonatomic) ICNFMCMimePart *topLevelPart;
@property (readonly, nonatomic) ICNFMCMimePart *preferredBodyPart;
@property (retain) NSData *bodyData;
@property (readonly, nonatomic) ICNFMCParsedMessage *parsedMessage;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSString *mimeSubtype;
@property (readonly, nonatomic) char isMultipartRelated;
@property (readonly, nonatomic) char isTextPlain;
@property (readonly, nonatomic) NSEnumerator *attachmentPartsEnumerator;
@property (readonly, nonatomic) char hasAttachments;

+ (void)initialize;
+ (id)versionString;
+ (id)newMimeBoundary;

- (void).cxx_destruct;
- (void)flushCachedData;
- (id)attachments;
- (id)attributedString;
- (id)webArchive;
- (char)isRich;
- (char)isHTML;
- (id)partWithNumber:(id)a0;
- (void)renderStringForJunk:(id)a0 renderPart:(id)a1;
- (char)_isPossiblySignedOrEncrypted;
- (id)allPartsEnumerator;
- (id)attachmentFilenames;
- (id)attachmentsWithContext:(id)a0;
- (void)calculateNumberOfAttachmentsIfNeeded;
- (id)dataForMimePart:(id)a0;
- (void)decodeIfNecessary;
- (void)decodeIfNecessaryWithContext:(id)a0;
- (unsigned int)numberOfAttachmentsWithFilenames:(id)a0 isSigned:(char *)a1 encrypted:(char *)a2 numberOfTNEFAttachments:(unsigned int *)a3;
- (id)parsedMessageWithContext:(id)a0;
- (void)renderString:(id)a0;
- (id)textHtmlPart;

@end
