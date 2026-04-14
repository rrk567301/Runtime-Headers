@class NSMutableDictionary, NSString, OISFUDataRepresentation, NSData, OISFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

@interface OISFUZipArchive : NSObject {
    NSMutableDictionary *mEntries;
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    OISFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
}

+ (BOOL)isZipArchiveAtPath:(id)a0;

- (void)dealloc;
- (BOOL)isEncrypted;
- (void)setCryptoKey:(id)a0;
- (id)initWithPath:(id)a0 collapseCommonRootDirectory:(BOOL)a1;
- (id)initWithPath:(id)a0 collapseCommonRootDirectory:(BOOL)a1 ignoreCase:(BOOL)a2;
- (id)initWithData:(id)a0 collapseCommonRootDirectory:(BOOL)a1;
- (id)initWithData:(id)a0 collapseCommonRootDirectory:(BOOL)a1 ignoreCase:(BOOL)a2;
- (id)entryWithName:(id)a0 dataLength:(long long)a1;
- (id)allEntryNames;
- (id)passphraseVerifier;
- (id)passphraseHint;
- (id)encryptedDocumentUuid;
- (BOOL)decompressAtPath:(id)a0;
- (BOOL)decompressAtPath:(id)a0 wasEmpty:(BOOL *)a1;
- (id)commonRootDirectoryIgnoringCase:(BOOL)a0;
- (void)readEntries;
- (void)collapseCommonRootDirectoryIgnoreCase:(BOOL)a0;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x0; long long x1; long long x2; })readEndOfCentralDirectoryFromInputStream:(id)a0;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)a0 offset:(long long *)a1;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x0; long long x1; long long x2; })readZip64EndOfCentralDirectoryFromInputStream:(id)a0 eocdOffset:(long long)a1;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x0; long long x1; long long x2; })readZip64EndOfCentralDirectoryFromInputStream:(id)a0 offset:(long long)a1;
- (id)readFilenameFromBuffer:(const char *)a0 size:(unsigned long long)a1;
- (void)readExtraFieldFromBuffer:(const char *)a0 size:(unsigned long long)a1 entry:(id)a2;
- (id)entryWithName:(id)a0;

@end
