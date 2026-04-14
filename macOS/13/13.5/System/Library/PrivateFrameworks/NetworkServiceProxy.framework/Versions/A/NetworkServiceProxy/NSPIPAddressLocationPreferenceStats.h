@class NSString;

@interface NSPIPAddressLocationPreferenceStats : NSPProxyAnalytics

@property (nonatomic) unsigned long long locationPreference;
@property (retain, nonatomic) NSString *tierType;

- (void).cxx_destruct;
- (id)eventName;
- (id)analyticsDict;

@end
