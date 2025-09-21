@class NSURL;

@interface MFNeXTMailbox : MFMboxDocument

@property (readonly, nonatomic) NSURL *tableOfContentsFile;
@property (readonly, nonatomic) unsigned long long maxFileSize;

+ (BOOL)isValidItem:(id)a0;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)initWithMessages:(id)a0;
- (id)_headerDigestForHeaders:(id)a0 key:(id)a1;
- (BOOL)exportMessagesToURL:(id)a0 error:(id *)a1;
- (BOOL)exportMessagesToURL:(id)a0 error:(id *)a1 outNumMessagesExported:(unsigned long long *)a2;
- (id)initWithMessages:(id)a0 maxFileSize:(unsigned long long)a1;
- (id)messagesForImporter;

@end
