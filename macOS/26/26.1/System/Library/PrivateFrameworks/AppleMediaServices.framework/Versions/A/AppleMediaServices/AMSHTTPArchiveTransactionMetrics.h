@class NSURLRequest, NSDate, NSURLResponse;

@interface AMSHTTPArchiveTransactionMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL apsRelayAttempted;
@property (readonly) BOOL apsRelaySucceeded;
@property (readonly) NSURLRequest *request;
@property (readonly) NSURLResponse *response;
@property (readonly) long long resourceFetchType;
@property (readonly) NSDate *requestStartDate;
@property (readonly) NSDate *responseEndDate;
@property (readonly) NSDate *fetchStartDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 response:(id)a1 resourceFetchType:(long long)a2 apsRelayAttempted:(BOOL)a3 apsRelaySucceeded:(BOOL)a4 requestStartDate:(id)a5 responseEndDate:(id)a6 fetchStartDate:(id)a7;
- (id)initWithURLSessionTaskTransactionMetrics:(id)a0;

@end
