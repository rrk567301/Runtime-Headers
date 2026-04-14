@class NSString, IDSRateLimiter;

@interface IDSSOSLogger : NSObject <CUTMetricLogger>

@property (retain, nonatomic) NSString *sosURLString;
@property (retain, nonatomic) IDSRateLimiter *rateLimiter;
@property (readonly, nonatomic) double deviceSOSIdentifierRefreshInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)loggerWithURLString:(id)a0;

@end
