@class NSURLRequest, NSError;

@interface ACSURLSessionDownloadTask : ACSURLSessionTask

@property (copy) id /* block */ _clientLocationCompletionHandler;
@property (retain) NSURLRequest *_resumedOriginalRequest;
@property (retain) NSError *_deferredLinkError;
@property (readonly, copy) NSURLRequest *originalRequest;

- (void)cancelByProducingResumeData:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_isUpload;
- (id)initWithNSURLDownloadTaskCreator:(id /* block */)a0 initialRequest:(id)a1 forSession:(id)a2;

@end
