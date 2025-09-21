@class NSString, HTTPConnection, NSData, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HTTPAsyncFileResponse : NSObject <HTTPResponse> {
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    unsigned long long readOffset;
    BOOL aborted;
    NSData *data;
    int fileFD;
    void *readBuffer;
    unsigned long long readBufferSize;
    unsigned long long readBufferOffset;
    unsigned long long readRequestLength;
    NSObject<OS_dispatch_queue> *readQueue;
    NSObject<OS_dispatch_source> *readSource;
    BOOL readSourceSuspended;
}

+ (void)initialize;

- (id)filePath;
- (void)abort;
- (BOOL)isAsynchronous;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)contentLength;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1;
- (void)pauseReadSource;
- (void)cancelReadSource;
- (void)connectionDidClose;
- (BOOL)openFileAndSetupReadSource;
- (BOOL)openFileIfNeeded;
- (void)processReadBuffer;
- (void)resumeReadSource;

@end
