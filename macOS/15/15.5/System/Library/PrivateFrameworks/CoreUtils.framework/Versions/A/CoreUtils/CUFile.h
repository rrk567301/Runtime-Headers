@class NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CUFile : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _fd;
    NSMutableArray *_readQueue;
    NSMutableArray *_writeQueue;
    unsigned long long _totalLength;
    NSURL *_url;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)readLength:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)writeData:(id)a0 completionHandler:(id /* block */)a1;
- (void)_completeReadRequest:(id)a0 data:(id)a1 error:(id)a2;
- (void)_completeWriteRequest:(id)a0 error:(id)a1;
- (int)_openForReadingAndReturnError:(id *)a0;
- (int)_openForWritingAndReturnError:(id *)a0;
- (void)_processRead:(id)a0;
- (void)_processReads;
- (void)_processWrite:(id)a0;
- (void)_processWrites;
- (void)_readRequest:(id)a0;
- (void)_writeRequest:(id)a0;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (id)initForReadingFromURL:(id)a0 dispatchQueue:(id)a1;
- (id)initForWritingToURL:(id)a0 dispatchQueue:(id)a1;
- (id)initForWritingToURL:(id)a0 totalLength:(unsigned long long)a1 dispatchQueue:(id)a2;
- (void)readLength:(unsigned long long)a0 offset:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)writeData:(id)a0 offset:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
