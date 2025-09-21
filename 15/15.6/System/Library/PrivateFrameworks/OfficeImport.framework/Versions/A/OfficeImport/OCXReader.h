@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {
    const void *mDataBytes;
}

@property (retain, nonatomic) OCPZipPackage *zipPackage;

- (void).cxx_destruct;
- (char)start;
- (id)read;
- (BOOL)isBinaryReader;
- (void)restartReaderToUseDecryptedDocument;
- (char)retainDecryptorWithErrorCode:(int *)a0;
- (char)verifyFileFormat;

@end
