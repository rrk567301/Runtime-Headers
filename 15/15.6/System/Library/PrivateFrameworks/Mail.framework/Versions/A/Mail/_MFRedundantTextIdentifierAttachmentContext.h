@class NSString;

@interface _MFRedundantTextIdentifierAttachmentContext : NSObject

@property (readonly, copy, nonatomic) NSString *attachmentName;
@property (readonly, copy, nonatomic) NSString *attachmentExtension;
@property (readonly, nonatomic) unsigned long long attachmentSize;
@property (readonly, nonatomic) char attachmentIsDownloaded;
@property (readonly, nonatomic) char attachmentIsAutoArchived;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isEqualTo:(id)a0;
- (id)initWithAttachmentName:(id)a0 attachmentSize:(unsigned long long)a1 attachmentIsDownloaded:(char)a2 attachmentIsAutoArchived:(char)a3;

@end
