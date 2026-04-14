@class NSString, NSData;

@interface PKXARArchive : PKMutableArchive {
    NSString *_archivePath;
    BOOL _skipsVerify;
    NSData *_archiveHash;
    struct __xar_t { } *_xarPtr;
}

+ (id)_fileAttributeKeyForXARPropertyName:(id)a0;
+ (id)_fileAttributeKeyForXARFileType:(id)a0;
+ (id)_fileAttributeForXARProperty:(char *)a0 fileAttributeKey:(id)a1;

- (void)dealloc;
- (BOOL)fileExistsAtPath:(id)a0;
- (id)enumeratorAtPath:(id)a0;
- (id)archiveDigest;
- (BOOL)closeArchive;
- (id)dataForPath:(id)a0;
- (id)archivePath;
- (id)archiveDigestData;
- (id)computedArchiveDigestWithAlgorithm:(id)a0;
- (id)fileAttributesAtPath:(id)a0;
- (BOOL)verifyReturningError:(id *)a0;
- (id)initForReadingFromPath:(id)a0;
- (id)initForReadingFromPath:(id)a0 options:(id)a1;
- (BOOL)_extractFile:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)archiveSignatures;
- (id)archiveSignatureDate;
- (struct __xar_t { } *)_xar;
- (void)_setSkipsVerifyIfUnsigned:(BOOL)a0;
- (int)archiveFileDescriptor;
- (long long)_archiveFileSize;
- (id)digestAlgorithm;
- (BOOL)_xarFileIsValid:(struct __xar_file_t { } *)a0;
- (struct __xar_file_t { } *)_fileStructForSubpath:(id)a0 error:(id *)a1;
- (unsigned long long)_fileOffsetForPath:(id)a0 error:(id *)a1;
- (unsigned long long)_fileOffsetForPath:(id)a0 checksum:(id *)a1 checksumType:(id *)a2 expectedSize:(unsigned long long *)a3 error:(id *)a4;
- (id)__openOrVerifyErrorForArchiveEntry:(id)a0;
- (id)__stringToNSData:(const char *)a0;

@end
