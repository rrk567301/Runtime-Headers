@class ICNFMCMimePart, NSArray, ICNFMCMessage, NSAttributedString, WebArchive;

@interface ICNFMCMessageBody : NSObject {
    id _messageOrClass;
}

@property long long messageID;
@property (weak) ICNFMCMessage *message;
@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property char hideCalendarMimePart;
@property (readonly, nonatomic) char isHTML;
@property (readonly, nonatomic) ICNFMCMimePart *textHtmlPart;
@property (readonly, nonatomic) WebArchive *webArchive;
@property (readonly, nonatomic) char isRich;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (readonly, copy, nonatomic) NSArray *attachmentFilenames;

- (id)init;
- (void).cxx_destruct;
- (id)attachmentsWithContext:(id)a0;
- (void)calculateNumberOfAttachmentsDecodeIfNeeded;
- (void)calculateNumberOfAttachmentsIfNeeded;
- (unsigned int)numberOfAttachmentsWithFilenames:(id)a0 isSigned:(char *)a1 encrypted:(char *)a2 numberOfTNEFAttachments:(unsigned int *)a3;
- (void)renderString:(id)a0;

@end
