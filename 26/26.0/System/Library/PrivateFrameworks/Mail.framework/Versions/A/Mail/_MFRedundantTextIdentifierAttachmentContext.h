@class NSString;

@interface _MFRedundantTextIdentifierAttachmentContext : NSObject

@property (readonly, copy, nonatomic) NSString *attachmentName;
@property (readonly, copy, nonatomic) NSString *attachmentExtension;
@property (readonly, nonatomic) unsigned long long attachmentSize;
@property (readonly, nonatomic) BOOL attachmentIsDownloaded;
@property (readonly, nonatomic) BOOL attachmentIsAutoArchived;

- (BOOL)isEqualTo:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAttachmentName:(id)a0 attachmentSize:(unsigned long long)a1 attachmentIsDownloaded:(BOOL)a2 attachmentIsAutoArchived:(BOOL)a3;

@end
