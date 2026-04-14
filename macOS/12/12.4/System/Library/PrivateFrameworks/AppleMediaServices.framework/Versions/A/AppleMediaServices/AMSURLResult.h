@class NSString, NSURLSessionTaskMetrics, NSData, NSURLResponse, NSURLSessionTask, NSDictionary;

@interface AMSURLResult : NSObject

@property (retain) NSData *data;
@property (retain) NSString *logUUID;
@property (readonly) NSURLSessionTaskMetrics *taskMetrics;
@property (retain) NSURLResponse *response;
@property (retain) NSURLSessionTask *task;
@property (retain) id object;
@property (readonly) NSString *responseCorrelationId;
@property (readonly) long long responseStatusCode;
@property (readonly) NSDictionary *responseHeaders;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)initWithTask:(id)a0 response:(id)a1 data:(id)a2 object:(id)a3;
- (id)initWithTaskInfo:(id)a0 object:(id)a1;

@end
