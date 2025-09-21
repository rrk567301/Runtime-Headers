@class NSArray, MEComposeContext;
@protocol MEMessageEncoder;

@interface MCMessageGenerator : NSObject {
    char _shouldMarkNonresizableAttachmentData;
}

@property (nonatomic) unsigned long long encodingHint;
@property (nonatomic) char createsMimeAlternatives;
@property (nonatomic) char createsPlainTextOnly;
@property (nonatomic) char alwaysCreatesRichText;
@property (nonatomic) char allows8BitMimeParts;
@property (nonatomic) char allowsBinaryMimeParts;
@property (nonatomic) char allowsAppleDoubleAttachments;
@property (retain, nonatomic) id<MEMessageEncoder> encoder;
@property (retain, nonatomic) MEComposeContext *composeContext;
@property (copy, nonatomic) NSArray *encryptionCertificates;

+ (id)newMessageWithBodyData:(id)a0 headers:(id)a1;
+ (id)domainHintForResentIDFromHeaders:(id)a0 hasResentFromHeaders:(char *)a1;

- (id)init;
- (void).cxx_destruct;
- (char)appendDataForMimePart:(id)a0 toData:(id)a1 withPartData:(id)a2;
- (id)newMessageWithAttributedString:(id)a0 headers:(id)a1;
- (id)newMessageWithHtmlString:(id)a0 plainTextAlternative:(id)a1 otherHtmlStringsAndAttachments:(id)a2 headers:(id)a3;
- (id)_newPartForAttachment:(id)a0 partData:(id)a1;
- (id)_createOutgoingFromTopLevelPart:(id)a0 topLevelHeaders:(id)a1 datasByMimePart:(id)a2;
- (id)_createOutgoingMessageFromData:(id)a0 headers:(id)a1;
- (id)_createOutgoingMessageUsingEncoder:(id)a0 topLevelPart:(id)a1 topLevelHeaders:(id)a2 datasByMimePart:(id)a3 isDraft:(char)a4 error:(id *)a5;
- (char)_encodeDataForMimePart:(id)a0 withPartData:(id)a1;
- (id)_fullMessageDataForTopLevelPart:(id)a0 topLevelHeaders:(id)a1 datasByMimePart:(id)a2;
- (id)_hfsFilenameDataWithFilename:(id)a0 partData:(id)a1;
- (id)_newDataForMimePart:(id)a0 withPartData:(id)a1;
- (id)_newMimePartWithAttributedString:(id)a0 partData:(id)a1 outputRich:(char)a2;
- (id)_newMimePartWithWebResource:(id)a0 partData:(id)a1 seenURLStrings:(id)a2;
- (id)_newOutgoingMessageFromTopLevelMimePart:(id)a0 topLevelHeaders:(id)a1 withPartData:(id)a2 isDraft:(char)a3;
- (id)_newPartAndDataForHTMLStringAndMIMECharset:(id)a0 partData:(id)a1;
- (id)_newPartAndDataForString:(id)a0 charset:(id)a1 subtype:(id)a2 partData:(id)a3;
- (id)_newPartForDirectoryAttachment:(id)a0 partData:(id)a1;
- (id)_newPlainTextPartWithAttributedString:(id)a0 partData:(id)a1;
- (id)_newRFC2047NameParameterDataForMimePart:(id)a0;
- (void)_recursivelyAddSubresourcesFromArchive:(id)a0 toArray:(id)a1;
- (void)_setMessageIDAndMIMETypeForTopLevelHeaders:(id)a0;
- (void)_setMimeTypeFromAttachment:(id)a0 onMimePart:(id)a1 filename:(id *)a2;
- (void)appendHeadersForMimePart:(id)a0 toHeaders:(id)a1;
- (id)datasByMIMEPartForTopLevelPart:(id)a0 removingAttachments:(char)a1;
- (id)newDataForAttributedString:(id)a0;
- (id)newMessageByRemovingAttachmentsFromMessage:(id)a0;
- (id)newMessageWithAttributedString:(id)a0 headers:(id)a1 shouldSign:(char)a2;
- (id)newMessageWithAttributedString:(id)a0 headers:(id)a1 shouldSign:(char)a2 isDraft:(char)a3;
- (id)newMessageWithHtmlString:(id)a0 plainTextAlternative:(id)a1 otherHtmlStringsAndAttachments:(id)a2 headers:(id)a3 isDraft:(char)a4;
- (void)setShouldMarkNonresizableAttachmentData:(char)a0;

@end
