@class NSString;

@interface NSPProxyAgentStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (nonatomic) unsigned long long ingressProxyTokensAdded;
@property (nonatomic) unsigned long long egressProxyTokensAdded;
@property (nonatomic) unsigned long long ingressProxyLowWaterMarkHitCount;
@property (nonatomic) unsigned long long egressProxyLowWaterMarkHitCount;

- (void).cxx_destruct;
- (id)eventName;
- (id)analyticsDict;

@end
