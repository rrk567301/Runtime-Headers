@class NSURL;

@interface PFAppleArchiveStream : NSObject {
    struct AAByteStream_impl { } *_inputStream;
    struct AAByteStream_impl { } *_outputStream;
    struct AAByteStream_impl { } *_compressionStream;
}

@property (readonly) NSURL *archiveURL;
@property long long compression;
@property BOOL appendToExistingArchive;
@property unsigned long long blockSize;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)close:(id *)a0;
- (id)initWithArchiveURL:(id)a0;
- (BOOL)openForWriting:(id *)a0;
- (BOOL)openForReading:(id *)a0;

@end
