@class NEFilterFlow;

@interface NEFilterReport : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NEFilterFlow *flow;
@property long long action;
@property unsigned long long bytesInboundCount;
@property unsigned long long bytesOutboundCount;
@property (readonly) long long event;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
