@class NSString, NSData;

@interface PKXARArchive : PKMutableArchive {
    NSString *_archivePath;
    BOOL _skipsVerify;
    NSData *_archiveHash;
    struct __xar_t { } *_xarPtr;
}

+ (id)_fileAttributeKeyForXARFileType:(id)a0;
+ (id)_fileAttributeKeyForXARPropertyName:(id)a0;
+ (id)_fileAttributeForXARProperty:(char *)a0 fileAttributeKey:(id)a1;

- (void)dealloc;
- (id)enumeratorAtPath:(id)a0;
- (BOOL)fileExistsAtPath:(id)a0;
- (id)archiveDigest;
- (BOOL)closeArchive;
- (id)dataForPath:(id)a0;
- (id)digestAlgorithm;
- (id)initForReadingFromPath:(id)a0 options:(id)a1;
- (id)archivePath;
- (id)fileAttributesAtPath:(id)a0;
- (BOOL)_extractFile:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)archiveDigestData;
- (id)computedArchiveDigestWithAlgorithm:(id)a0;
- (BOOL)verifyReturningError:(id *)a0;
- (id)initForReadingFromPath:(id)a0;
- (id)archiveSignatures;
- (id)archiveSignatureDate;
- (struct __xar_t { } *)_xar;
- (id)__openOrVerifyErrorForArchiveEntry:(id)a0;
- (struct __xar_file_t { } *)_fileStructForSubpath:(id)a0 error:(id *)a1;
- (BOOL)_xarFileIsValid:(struct __xar_file_t { } *)a0;
- (long long)_archiveFileSize;
- (void)_setSkipsVerifyIfUnsigned:(BOOL)a0;
- (unsigned long long)_fileOffsetForPath:(id)a0 error:(id *)a1;

@end
