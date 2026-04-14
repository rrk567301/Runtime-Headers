@class NSURLResponse;

@interface NWURLSessionStreamTask : NWURLSessionTask {
    BOOL _readClosed;
    BOOL _writeClosed;
    BOOL _becameStreams;
    unsigned int _outstandingReadsWrites;
    NSURLResponse *_storedResponse;
}

+ (BOOL)isSubclassOfClass:(Class)a0;

- (void)closeWrite;
- (void)captureStreams;
- (void)closeRead;
- (void)writeData:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)startSecureConnection;
- (void)readDataOfMinLength:(unsigned long long)a0 maxLength:(unsigned long long)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (id)error;
- (id)response;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)loaderBetterPathAvailable;
- (void)loaderConnectedWithHTTPConnectionMetadata:(id)a0 CNAMEChain:(id)a1 unlistedTracker:(id)a2;
- (void)startNextLoad;

@end
