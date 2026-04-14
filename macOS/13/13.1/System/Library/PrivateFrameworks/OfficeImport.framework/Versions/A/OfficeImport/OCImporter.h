@class NSString, OITSUProgressContext, NSURL, NSData, OCDReader;

@interface OCImporter : OCMapper {
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    BOOL mTryAlternateReader;
}

@property (retain) OITSUProgressContext *progressContext;
@property (copy, nonatomic) NSString *lastPasswordAttempted;
@property (copy, nonatomic) id /* block */ officeDOMInspector;

+ (void)initialize;
+ (id)xmlPathExtensions;
+ (Class)binaryReaderClass;
+ (Class)xmlReaderClass;
+ (BOOL)URLIsXML:(id)a0;
+ (Class)readerClassForURL:(id)a0;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)setURL:(id)a0;
- (id)displayName;
- (id)url;
- (BOOL)start;
- (id)filename;
- (BOOL)setPassphrase:(id)a0;
- (BOOL)tryAlternateReader;
- (BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL *)a0 errorMessage:(id *)a1 readError:(BOOL *)a2;
- (BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL *)a0 errorMessage:(id *)a1;
- (void)finalizeWithDocumentState:(id)a0;
- (BOOL)isXML;
- (Class)readerClass;

@end
