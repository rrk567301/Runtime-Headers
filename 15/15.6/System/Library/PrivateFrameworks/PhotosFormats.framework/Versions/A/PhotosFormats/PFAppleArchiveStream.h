@class NSURL, NSData, NSDictionary;

@interface PFAppleArchiveStream : NSObject {
    struct AAByteStream_impl { } *_inputStream;
    struct AAByteStream_impl { } *_outputStream;
    struct AAByteStream_impl { } *_compressionStream;
    struct AAByteStream_impl { } *_encryptionStream;
    struct AEAContext_impl { } *_encryptionContext;
}

@property (readonly) NSURL *archiveURL;
@property long long compression;
@property (retain) NSData *encryptionKey;
@property (retain) NSDictionary *encryptedArchiveMetadata;
@property char appendToExistingArchive;
@property unsigned long long blockSize;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)close:(id *)a0;
- (id)initWithArchiveURL:(id)a0;
- (char)openForReading:(id *)a0;
- (char)openForWriting:(id *)a0;
- (struct AAByteStream_impl { } *)_byteStreamToBeReadByArchiveDecodingStream;
- (struct AAByteStream_impl { } *)_byteStreamToBeTargetedByArchiveEncodingStream;
- (char)_openForReadingEncryptionStreamWithError:(id *)a0;
- (char)_openForWritingCompressionStreamShouldAppend:(char)a0 error:(id *)a1;
- (char)_openForWritingEncryptionStreamWithError:(id *)a0;
- (char)_setupEncryptionContextForWritingWithError:(id *)a0;
- (unsigned int)aaCompressionAlgorithm;

@end
