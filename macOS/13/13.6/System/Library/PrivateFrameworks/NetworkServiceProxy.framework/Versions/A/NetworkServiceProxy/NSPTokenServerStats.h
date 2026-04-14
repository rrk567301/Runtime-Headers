@class NSString;

@interface NSPTokenServerStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (retain, nonatomic) NSString *tokenServerAddress;

- (void).cxx_destruct;
- (id)eventName;
- (id)analyticsDict;

@end
