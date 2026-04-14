@class NSData, AMSHTTPArchiveMetrics, NSURLSessionTaskMetrics;

@interface AMSHTTPArchiveTaskInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) AMSHTTPArchiveMetrics *taskMetrics;
@property (readonly) NSData *HTTPBody;
@property (readonly) NSData *responseData;
@property (readonly) NSURLSessionTaskMetrics *metrics;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURLTaskInfo:(id)a0;
- (void).cxx_destruct;

@end
