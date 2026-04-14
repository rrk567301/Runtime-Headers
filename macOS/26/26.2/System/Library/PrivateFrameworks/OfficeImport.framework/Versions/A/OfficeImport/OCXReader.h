@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {
    const void *mDataBytes;
}

@property (retain, nonatomic) OCPZipPackage *zipPackage;

- (id)read;
- (void).cxx_destruct;
- (BOOL)start;
- (BOOL)isBinaryReader;
- (void)restartReaderToUseDecryptedDocument;
- (BOOL)retainDecryptorWithErrorCode:(int *)a0;
- (BOOL)verifyFileFormat;

@end
