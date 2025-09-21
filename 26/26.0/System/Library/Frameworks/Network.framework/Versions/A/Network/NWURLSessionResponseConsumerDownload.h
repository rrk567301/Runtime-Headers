@class NSString, NSURLResponse, NSURL, NWURLError, NSObject;
@protocol OS_dispatch_io;

@interface NWURLSessionResponseConsumerDownload : NSObject <NWURLSessionResponseConsumer> {
    BOOL _hasCompleted;
    BOOL _isResuming;
    BOOL _firstPrepareCalled;
    BOOL _calledDidResumeAtOffset;
    int _fd;
    id /* block */ _completionHandler;
    NSURLResponse *_currentResponse;
    NSURL *_fileURL;
    NSString *_tempFileName;
    NSObject<OS_dispatch_io> *_io;
    id /* block */ _pendingCompletionBlock;
    NWURLError *_internalError;
    long long _countOfBytesReceivedInternal;
}

@property (readonly) NSURLResponse *response;
@property (readonly) NWURLError *error;
@property (readonly) long long countOfBytesReceived;
@property (readonly) NSURL *downloadFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)populateDownloadResumeInfo:(id)a0;
- (id)prepareNextRequest:(id)a0 forTask:(id)a1 error:(id *)a2;
- (void)task:(id)a0 deliverData:(id)a1 complete:(BOOL)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (void)task:(id)a0 deliverResponse:(id)a1 completionHandler:(id /* block */)a2;

@end
