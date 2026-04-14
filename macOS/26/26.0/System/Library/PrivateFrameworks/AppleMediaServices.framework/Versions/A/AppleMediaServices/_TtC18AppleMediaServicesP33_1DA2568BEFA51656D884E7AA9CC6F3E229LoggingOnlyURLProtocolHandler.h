@class NSURLRequest, NSURLSessionTaskMetrics, NSURLSessionTask, NSURLResponse, AMSURLAction, NSMutableData, NSError;

@interface _TtC18AppleMediaServicesP33_1DA2568BEFA51656D884E7AA9CC6F3E229LoggingOnlyURLProtocolHandler : NSObject <AMSURLHandling>

@property (nonatomic, weak) void /* function */ session;

- (void)handleCompletionWithTask:(NSURLSessionTask *)a0 metrics:(NSURLSessionTaskMetrics *)a1 decodedObject:(id)a2 completionHandler:(void (^)(AMSURLAction *))a3;
- (id)init;
- (void)decodeMutableData:(NSMutableData *)a0 task:(NSURLSessionTask *)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)reconfigureNewRequest:(NSURLRequest *)a0 originalTask:(NSURLSessionTask *)a1 redirect:(BOOL)a2 completionHandler:(void (^)(NSURLRequest *, NSError *))a3;
- (void)handleResponse:(NSURLResponse *)a0 task:(NSURLSessionTask *)a1 completionHandler:(void (^)(AMSURLAction *))a2;
- (void).cxx_destruct;
- (void)didCreateTask:(NSURLSessionTask *)a0 fromRequest:(NSURLRequest *)a1 completionHandler:(void (^)(BOOL, NSError *))a2;

@end
