@class NSDictionary, NSDate;

@interface MXSourceXPCPayload : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long sourceID;
@property (retain) NSDate *datestamp;
@property (retain) NSDictionary *metrics;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceID:(long long)a0 withDateStamp:(id)a1 andMetrics:(id)a2;

@end
