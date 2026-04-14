@class NSFileWrapper, ICNFMCMimePart;

@interface ICNFMCMimeTextAttachment : NSTextAttachment

@property (retain, nonatomic) ICNFMCMimePart *mimePart;
@property (readonly, nonatomic) NSFileWrapper *fileWrapperForcingDownload;

+ (id)attachmentWithInternalAppleAttachmentData:(id)a0 mimeBody:(id)a1;

- (void).cxx_destruct;
- (id)initWithFileWrapper:(id)a0;
- (id)initWithMimePart:(id)a0;
- (unsigned long long)ic_approximateSize;
- (id)initWithMimePart:(id)a0 andFileWrapper:(id)a1;
- (id)fileWrapperForcingDownloadEvenIfExternalBody:(BOOL)a0;
- (BOOL)ic_isPlaceholder;

@end
