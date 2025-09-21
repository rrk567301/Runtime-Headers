@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {
    const void *mDataBytes;
}

@property (retain, nonatomic) OCPZipPackage *zipPackage;

- (BOOL)start;
- (void).cxx_destruct;
- (id)read;
- (BOOL)isBinaryReader;
- (void)restartReaderToUseDecryptedDocument;
- (BOOL)retainDecryptorWithErrorCode:(int *)a0;
- (BOOL)verifyFileFormat;

@end
