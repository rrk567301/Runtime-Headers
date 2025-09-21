@class NSArray, __CFN_TaskMetrics, NSDateInterval;

@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding> {
    __CFN_TaskMetrics *__metrics;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSArray *transactionMetrics;
@property (readonly, copy) NSDateInterval *taskInterval;
@property (readonly) unsigned long long redirectCount;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
