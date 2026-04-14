@class NSString;

@interface NSPDeviceIdentityStats : NSPProxyAnalytics

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) long long errorCode;

- (void).cxx_destruct;
- (id)eventName;
- (id)analyticsDict;

@end
