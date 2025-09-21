@class NSURL;

@interface MFNeXTMailbox : MFMboxDocument

@property (readonly, nonatomic) NSURL *tableOfContentsFile;

+ (char)isValidItem:(id)a0;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)_headerDigestForHeaders:(id)a0 key:(id)a1;
- (char)exportMessagesToURL:(id)a0 error:(id *)a1;
- (id)messagesForImporter;

@end
