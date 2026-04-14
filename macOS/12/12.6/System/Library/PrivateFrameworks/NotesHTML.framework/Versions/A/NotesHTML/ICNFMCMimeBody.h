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
@property (readonly, nonatomic) BOOL isMultipartRelated;
@property (readonly, nonatomic) BOOL isTextPlain;
@property (readonly, nonatomic) NSEnumerator *attachmentPartsEnumerator;
@property (readonly, nonatomic) BOOL hasAttachments;

+ (void)initialize;
+ (id)versionString;
+ (id)newMimeBoundary;

- (void).cxx_destruct;
- (void)flushCachedData;
- (id)attachments;
- (id)attributedString;
- (id)webArchive;
- (BOOL)isRich;
- (BOOL)isHTML;
- (void)renderString:(id)a0;
- (id)dataForMimePart:(id)a0;
- (unsigned int)numberOfAttachmentsWithFilenames:(id)a0 isSigned:(BOOL *)a1 encrypted:(BOOL *)a2 numberOfTNEFAttachments:(unsigned int *)a3;
- (id)parsedMessageWithContext:(id)a0;
- (id)attachmentFilenames;
- (id)textHtmlPart;
- (id)partWithNumber:(id)a0;
- (void)calculateNumberOfAttachmentsIfNeeded;
- (id)attachmentsWithContext:(id)a0;
- (void)decodeIfNecessary;
- (void)renderStringForJunk:(id)a0 renderPart:(id)a1;
- (BOOL)_isPossiblySignedOrEncrypted;
- (void)decodeIfNecessaryWithContext:(id)a0;
- (id)allPartsEnumerator;

@end
