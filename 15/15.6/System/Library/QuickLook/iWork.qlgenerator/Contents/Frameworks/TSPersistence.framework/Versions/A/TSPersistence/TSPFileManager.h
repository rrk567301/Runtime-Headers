@interface TSPFileManager : NSObject

+ (char)copyDataFromReadChannel:(id)a0 decryptionInfo:(id)a1 size:(unsigned long long)a2 toWriteChannel:(id)a3 encryptionInfo:(id)a4 encodedLength:(unsigned long long *)a5 error:(id *)a6;
+ (void)copyDataFromReadChannel:(id)a0 decryptionInfo:(id)a1 size:(unsigned long long)a2 toWriteChannel:(id)a3 encryptionInfo:(id)a4 synchronous:(char)a5 completion:(id /* block */)a6;
+ (void)copyDataFromReadChannel:(id)a0 decryptionInfo:(id)a1 toWriteChannel:(id)a2 encryptionInfo:(id)a3 completion:(id /* block */)a4;
+ (void)copyDataFromReadChannel:(id)a0 size:(unsigned long long)a1 toWriteChannel:(id)a2 synchronous:(char)a3 completion:(id /* block */)a4;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 sourcePath:(id)a2 targetPath:(id)a3;
+ (id)ioCompletionQueue;
+ (char)linkOrCloneItemAtURL:(id)a0 toURL:(id)a1 canLink:(char)a2 canClone:(char)a3 error:(id *)a4;
+ (char)linkOrCloneItemAtURL:(id)a0 toURL:(id)a1 canLink:(char)a2 error:(id *)a3;
+ (char)linkOrCopyItemAtURL:(id)a0 decryptionInfo:(id)a1 toURL:(id)a2 encryptionInfo:(id)a3 canLink:(char)a4 encodedLength:(unsigned long long *)a5 error:(id *)a6;
+ (void)transcodeReadChannel:(id)a0 decryptionInfo:(id)a1 size:(unsigned long long)a2 toWriteChannel:(id)a3 encryptionInfo:(id)a4 synchronous:(char)a5 completion:(id /* block */)a6;

@end
