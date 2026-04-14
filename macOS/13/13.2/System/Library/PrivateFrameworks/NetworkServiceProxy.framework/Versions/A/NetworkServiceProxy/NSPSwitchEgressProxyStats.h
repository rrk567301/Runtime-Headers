@class NSString;

@interface NSPSwitchEgressProxyStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (retain, nonatomic) NSString *vendor;
@property (nonatomic) BOOL primaryProxy;
@property (nonatomic) BOOL fallbackProxy;

- (void).cxx_destruct;
- (id)eventName;
- (id)analyticsDict;

@end
