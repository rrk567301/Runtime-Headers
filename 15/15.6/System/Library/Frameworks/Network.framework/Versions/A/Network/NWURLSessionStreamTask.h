@class NSURLResponse;

@interface NWURLSessionStreamTask : NWURLSessionTask {
    char _readClosed;
    char _writeClosed;
    char _becameStreams;
    unsigned int _outstandingReadsWrites;
    NSURLResponse *_storedResponse;
}

+ (char)isSubclassOfClass:(Class)a0;

- (char)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)response;
- (void)captureStreams;
- (void)closeRead;
- (void)closeWrite;
- (void)readDataOfMinLength:(unsigned long long)a0 maxLength:(unsigned long long)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void)startSecureConnection;
- (void)writeData:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)loaderBetterPathAvailable;
- (void)loaderConnectedWithHTTPConnectionMetadata:(id)a0 CNAMEChain:(id)a1 unlistedTracker:(id)a2;
- (void)startNextLoad:(char)a0;

@end
