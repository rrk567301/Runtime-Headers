@interface ICNFMCMessageGenerator : NSObject {
    char _shouldConvertCompositeImages;
    char _shouldMarkNonresizableAttachmentData;
}

@property (nonatomic) unsigned long long preferredEncoding;
@property (nonatomic) unsigned long long encodingHint;
@property (nonatomic) char createsMimeAlternatives;
@property (nonatomic) char createsPlainTextOnly;
@property (nonatomic) char alwaysCreatesRichText;
@property (nonatomic) char allows8BitMimeParts;
@property (nonatomic) char allowsBinaryMimeParts;
@property (nonatomic) char allowsAppleDoubleAttachments;
@property (nonatomic) char signsOutput;
@property (nonatomic) char encryptsOutput;

+ (id)domainHintForResentIDFromHeaders:(id)a0 hasResentFromHeaders:(char *)a1;

- (id)init;
- (id)newMessageWithBodyData:(id)a0 headers:(id)a1;
- (char)appendDataForMimePart:(id)a0 toData:(id)a1 withPartData:(id)a2;
- (id)newMessageWithHtmlString:(id)a0 plainTextAlternative:(id)a1 otherHtmlStringsAndAttachments:(id)a2 headers:(id)a3;
- (id)_newPartForAttachment:(id)a0 partData:(id)a1;
- (char)_encodeDataForMimePart:(id)a0 withPartData:(id)a1;
- (id)_hfsFilenameDataWithFilename:(id)a0 partData:(id)a1;
- (id)_newDataForMimePart:(id)a0 withPartData:(id)a1;
- (id)_newMimePartWithAttributedString:(id)a0 partData:(id)a1 outputRich:(char)a2;
- (id)_newMimePartWithWebResource:(id)a0 partData:(id)a1 seenURLStrings:(id)a2;
- (id)_newPartAndDataForString:(id)a0 charset:(id)a1 subtype:(id)a2 partData:(id)a3;
- (id)_newPartForDirectoryAttachment:(id)a0 partData:(id)a1;
- (id)_newPlainTextPartWithAttributedString:(id)a0 partData:(id)a1;
- (id)_newRFC2047NameParameterDataForMimePart:(id)a0;
- (void)_recursivelyAddSubresourcesFromArchive:(id)a0 toArray:(id)a1;
- (void)_setMimeTypeFromAttachment:(id)a0 onMimePart:(id)a1 filename:(id *)a2;
- (void)setShouldMarkNonresizableAttachmentData:(char)a0;
- (void)_appendHeadersForMimePart:(id)a0 toHeaders:(id)a1;
- (id)_newOutgoingMessage;
- (id)_newOutgoingMessageFromTopLevelMimePart:(id)a0 topLevelHeaders:(id)a1 withPartData:(id)a2;
- (id)_newPartForStationeryCompositeImage:(id)a0 partData:(id)a1;
- (unsigned long long)_preferredEncodingUsingHintIfNecessary;
- (id)newMessageWithHtmlString:(id)a0 attachments:(id)a1 headers:(id)a2;
- (void)setShouldConvertCompositeImages:(char)a0;

@end
