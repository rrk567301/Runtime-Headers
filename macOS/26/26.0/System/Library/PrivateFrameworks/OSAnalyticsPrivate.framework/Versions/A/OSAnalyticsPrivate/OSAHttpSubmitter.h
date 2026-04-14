@class NSString, NSHTTPURLResponse, NSURLSessionDataTask, NSMutableData, NSObject;
@protocol OS_dispatch_semaphore;

@interface OSAHttpSubmitter : OSASubmitter <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSURLSessionDataTask *_dataTask;
    NSHTTPURLResponse *_response;
    NSMutableData *_payload;
    NSObject<OS_dispatch_semaphore> *_submissionSem;
    unsigned int _thoughput_warnings;
    double _last_thoughput_check;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)abort;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)postContent:(id)a0 withHeaders:(id)a1 toEndpoint:(int)a2;
- (id)init;
- (void)cancelCurrentTask;
- (void).cxx_destruct;

@end
