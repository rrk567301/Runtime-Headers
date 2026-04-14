@interface CipherML.CipherMLService : SwiftNativeNSObject <CipherML.CipherMLServiceProtocol> {
    void /* unknown type, empty encoding */ _transaction;
    void /* unknown type, empty encoding */ activeTask;
}

- (id)init;
- (void)cancelUpload;
- (void)uploadKeysWithEncodedArguments:(id)a0 delegate:(id)a1;

@end
