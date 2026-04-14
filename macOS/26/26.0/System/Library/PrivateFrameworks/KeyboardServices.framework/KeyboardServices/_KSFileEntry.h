@class NSString, NSMutableDictionary, NSData, NSMutableArray;

@interface _KSFileEntry : NSObject <NSSecureCoding> {
    NSMutableArray *_tempFiles;
    NSMutableArray *_fileArray;
    NSData *_fileBlob;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSMutableDictionary *extendedAttributes;

+ (id)entryWithSerialisedDataAtURL:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)consistencyCheck;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)addBlobToFile:(id)a0;
- (void)loadAttributesFromURL:(id)a0;
- (void)performOnEverything:(id /* block */)a0;
- (void)restoreToPath:(id)a0;
- (void)saveAttributesToURL:(id)a0;
- (id)serialiseToTemporaryFile;
- (id)temporaryFileNameForType:(id)a0;

@end
