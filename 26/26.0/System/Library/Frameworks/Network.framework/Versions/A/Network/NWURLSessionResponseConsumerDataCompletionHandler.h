@class NSString, NSURLResponse, NSURL, NWURLError, NSObject;
@protocol OS_dispatch_data;

@interface NWURLSessionResponseConsumerDataCompletionHandler : NSObject <NWURLSessionResponseConsumer> {
    BOOL _hasCompleted;
    id /* block */ _completionHandler;
    NSURLResponse *_currentResponse;
    NWURLError *_internalError;
    NSObject<OS_dispatch_data> *_data;
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
