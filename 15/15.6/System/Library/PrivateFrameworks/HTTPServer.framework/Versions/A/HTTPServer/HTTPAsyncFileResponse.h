@class NSString, HTTPConnection, NSData, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HTTPAsyncFileResponse : NSObject <HTTPResponse> {
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    unsigned long long readOffset;
    char aborted;
    NSData *data;
    int fileFD;
    void *readBuffer;
    unsigned long long readBufferSize;
    unsigned long long readBufferOffset;
    unsigned long long readRequestLength;
    NSObject<OS_dispatch_queue> *readQueue;
    NSObject<OS_dispatch_source> *readSource;
    char readSourceSuspended;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)filePath;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (char)isAsynchronous;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)abort;
- (char)isDone;
- (unsigned long long)contentLength;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1;
- (void)pauseReadSource;
- (void)cancelReadSource;
- (void)connectionDidClose;
- (char)openFileAndSetupReadSource;
- (char)openFileIfNeeded;
- (void)processReadBuffer;
- (void)resumeReadSource;

@end
