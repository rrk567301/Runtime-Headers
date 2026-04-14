@class NSURLSessionTask, NSDictionary, NSData, NSError, NSMutableArray, NSURLRequest;

@interface AMSMockURLResponse : NSObject

@property (retain) NSMutableArray *responseHandlerBlocks;
@property (retain) NSURLSessionTask *runningTask;
@property (retain) NSError *error;
@property unsigned long long statusCode;
@property (retain) NSDictionary *headers;
@property (retain) NSData *body;
@property BOOL performActualRequest;
@property (readonly) NSURLRequest *originalRequest;

+ (id)responseWithError:(id)a0;
+ (id)responseFromActualResponse;
+ (id)responseWithStatus:(unsigned long long)a0 headers:(id)a1 body:(id)a2;
+ (id)responseWithHARFile:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (struct { id x0; id x1; id x2; })handleReceivedRequest:(id)a0;
- (void)addResponseHandler:(id /* block */)a0;
- (void)stopRunningTasks;

@end
