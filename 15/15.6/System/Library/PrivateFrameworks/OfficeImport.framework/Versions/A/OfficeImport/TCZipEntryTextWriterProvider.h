@class NSString, OISFUZipArchiveOutputStream;

@interface TCZipEntryTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, copy, nonatomic) NSString *entryName;
@property (readonly, nonatomic) OISFUZipArchiveOutputStream *outputStream;
@property (readonly, nonatomic) char isCompressed;

- (void).cxx_destruct;
- (char)setUp;
- (id)initWithEntryName:(id)a0 outputStream:(id)a1 isCompressed:(char)a2;

@end
