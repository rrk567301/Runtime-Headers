@class NSArray, NSObject, NSDateInterval;
@protocol OS_nw_protocol_metadata;

@interface NWURLSessionTaskMetrics : NSURLSessionTaskMetrics <NSSecureCoding> {
    NSObject<OS_nw_protocol_metadata> *_clientMetadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *transactionMetrics;
@property (readonly, copy, nonatomic) NSDateInterval *taskInterval;
@property (readonly, nonatomic) unsigned long long redirectCount;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
