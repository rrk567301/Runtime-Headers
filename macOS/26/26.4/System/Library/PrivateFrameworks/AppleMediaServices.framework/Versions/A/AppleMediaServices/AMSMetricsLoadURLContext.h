@class NSData, NSError, NSURLSessionTaskMetrics, NSURLSession, AMSBuyParams, NSDictionary, AMSURLRequestProperties, NSURLSessionTask, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSMetricsLoadURLContext : NSObject {
    NSDictionary *_decodedResponseBody;
}

@property (retain) AMSBuyParams *buyParams;
@property (retain) AMSURLRequestProperties *properties;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSError *error;
@property (retain) AMSProcessInfo *processInfo;
@property (retain) NSData *responseBody;
@property (retain) NSURLSession *session;
@property (retain) NSURLSessionTask *task;
@property (retain) NSURLSessionTaskMetrics *taskMetrics;

- (id)bagContract;
- (void)setBagContract:(id)a0;
- (id)initWithTask:(id)a0 metrics:(id)a1;
- (id)initWithTaskInfo:(id)a0 serverPayload:(id)a1;
- (id)metricsDictionaryPromise;
- (void).cxx_destruct;

@end
