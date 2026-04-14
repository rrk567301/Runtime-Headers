@class NSURLSession, NSURLSessionTask, NSURLResponse, NSURLSessionDataTask, NSInputStream;

@interface GRPCURLSessionTransportInternal.StreamingURLSessionDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {
    void /* unknown type, empty encoding */ responsePartSource;
    void /* unknown type, empty encoding */ hasSuspendedURLSessionTask;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ streamID;
    void /* unknown type, empty encoding */ logger;
}

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(NSURLSession *)a0 task:(NSURLSessionTask *)a1 needNewBodyStream:(void (^)(NSInputStream *))a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(NSURLSession *)a0 dataTask:(NSURLSessionDataTask *)a1 didReceiveResponse:(NSURLResponse *)a2 completionHandler:(void (^)(long long))a3;
- (id)init;
- (void).cxx_destruct;

@end
