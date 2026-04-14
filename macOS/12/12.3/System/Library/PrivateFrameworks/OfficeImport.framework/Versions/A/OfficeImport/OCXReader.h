@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {
    const void *mDataBytes;
}

@property (retain, nonatomic) OCPZipPackage *zipPackage;

- (void).cxx_destruct;
- (BOOL)start;
- (id)read;
- (BOOL)retainDecryptorWithErrorCode:(int *)a0;
- (BOOL)isBinaryReader;
- (BOOL)verifyFileFormat;
- (void)restartReaderToUseDecryptedDocument;

@end
