@class NSString, OITSUProgressContext, NSURL, NSData, OCDReader;

@interface OCImporter : OCMapper {
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    char mTryAlternateReader;
}

@property (retain) OITSUProgressContext *progressContext;
@property (copy, nonatomic) NSString *lastPasswordAttempted;
@property (copy, nonatomic) id /* block */ officeDOMInspector;

+ (void)initialize;
+ (char)URLIsXML:(id)a0;
+ (Class)binaryReaderClass;
+ (Class)readerClassForURL:(id)a0;
+ (id)xmlPathExtensions;
+ (Class)xmlReaderClass;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithURL:(id)a0;
- (void)setURL:(id)a0;
- (id)url;
- (id)displayName;
- (char)start;
- (id)filename;
- (char)setPassphrase:(id)a0;
- (void)finalizeWithDocumentState:(id)a0;
- (char)isDocumentEncryptedUnsupportedVersion:(char *)a0 errorMessage:(id *)a1;
- (char)isDocumentEncryptedUnsupportedVersionHelper:(char *)a0 errorMessage:(id *)a1 readError:(char *)a2;
- (char)isXML;
- (Class)readerClass;
- (char)tryAlternateReader;

@end
