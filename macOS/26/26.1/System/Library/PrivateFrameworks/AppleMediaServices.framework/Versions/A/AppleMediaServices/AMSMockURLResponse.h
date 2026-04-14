@class NSURLSessionTask, NSDictionary, NSData, NSError, NSURLRequest, NSMutableArray;

@interface AMSMockURLResponse : NSObject

@property (retain) NSMutableArray *responseHandlerBlocks;
@property (retain) NSURLSessionTask *runningTask;
@property (retain) NSURLRequest *originalRequest;
@property (retain) NSError *error;
@property unsigned long long statusCode;
@property (retain) NSDictionary *headers;
@property (retain) NSData *body;
@property BOOL performActualRequest;

+ (id)responseWithError:(id)a0;
+ (id)responseFromActualResponse;
+ (id)responseWithHARFile:(id)a0;
+ (id)responseWithStatus:(unsigned long long)a0 headers:(id)a1 body:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (void)addResponseHandler:(id /* block */)a0;
- (struct { id x0; id x1; id x2; })handleReceivedRequest:(id)a0;
- (void)stopRunningTasks;

@end
