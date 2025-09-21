@class NSString, IDSGFTMetricsRequest;

@interface IDSGlobalLinkRequestMetadata : NSObject

@property (readonly) double startTime;
@property (readonly) NSString *token;
@property (readonly) NSString *path;
@property (readonly) IDSGFTMetricsRequest *metricsRequest;
@property (readonly) char linkID;
@property (readonly) unsigned int localRAT;

- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0 path:(id)a1 token:(id)a2 linkID:(char)a3 localRAT:(unsigned int)a4 metricsRequest:(id)a5;

@end
