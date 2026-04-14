@class NSURLResponse;

@interface NWURLSessionStreamTask : NWURLSessionTask {
    BOOL _readClosed;
    BOOL _writeClosed;
    NSURLResponse *_storedResponse;
}

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)response;
- (void)readDataOfMinLength:(unsigned long long)a0 maxLength:(unsigned long long)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void)writeData:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)captureStreams;
- (void)closeWrite;
- (void)closeRead;
- (void)startSecureConnection;
- (void)loaderBetterPathAvailable;
- (void)startNextLoad;

@end
