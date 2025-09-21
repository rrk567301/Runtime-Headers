@class OISFUZipOutputEntry, NSString, OISFUZipFreeSpaceEntry, OISFUCryptoKey, NSData, NSMutableArray, OISFUMoveableFileOutputStream;
@protocol SFUOutputStream;

@interface OISFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {
    OISFUMoveableFileOutputStream *mOutputStream;
    OISFUCryptoKey *mCryptoKey;
    NSData *mPassphraseHint;
    NSData *mEncryptedDocumentUuid;
    NSMutableArray *mEntries;
    OISFUZipOutputEntry *mCurrentEntry;
    OISFUZipOutputEntry *mLastEntryInFile;
    id<SFUOutputStream> mEntryOutputStream;
    char *mBuffer;
    NSMutableArray *mFreeList;
    OISFUZipFreeSpaceEntry *mCurrentFreeSpace;
    unsigned long long mFreeBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)approximateBytesForEntryHeaderWithName:(id)a0;
+ (char)createZipWithItemsAtPath:(id)a0 zippedPath:(id)a1 rootPathComponentName:(id)a2;

- (void)dealloc;
- (void)close;
- (void)reset;
- (id)entryNames;
- (id)initWithPath:(id)a0;
- (void)flush;
- (unsigned long long)freeBytes;
- (void)removeEntryWithName:(id)a0;
- (void)beginEntryWithName:(id)a0 isCompressed:(char)a1 uncompressedSize:(unsigned long long)a2;
- (id)beginUncompressedUnknownSizeEntryWithName:(id)a0;
- (void)beginUnknownSizeEntryWithName:(id)a0 isCompressed:(char)a1;
- (char)canRemoveEntryWithName:(id)a0;
- (void)coalesceAndTruncateFreeSpace;
- (unsigned int)crc32ForEntry:(id)a0;
- (id)entriesAtPath:(id)a0;
- (void)finishEntry;
- (id)initWithOutputStream:(id)a0 cryptoKey:(id)a1 passphraseHint:(id)a2;
- (id)initWithPath:(id)a0 cryptoKey:(id)a1 passphraseHint:(id)a2;
- (void)moveToPath:(id)a0;
- (void)setCrc32ForCurrentEntry:(unsigned int)a0;
- (void)setEncryptedDocumentUuid:(id)a0;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;
- (void)writeCentralFileHeaderUsingEntry:(id)a0 isFirstEntry:(char)a1;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)a0;
- (unsigned long long)writeLocalFileHeaderForEntry:(id)a0;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)a0;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)a0;

@end
