@class NSArray;

@interface AMSHTTPArchiveMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *transactionMetrics;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransactionMetrics:(id)a0;
- (id)initWithURLSessionTaskMetrics:(id)a0;

@end
