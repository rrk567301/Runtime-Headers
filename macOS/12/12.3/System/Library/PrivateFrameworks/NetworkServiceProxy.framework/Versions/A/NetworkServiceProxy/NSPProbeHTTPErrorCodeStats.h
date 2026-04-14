@class NSString, NSNumber;

@interface NSPProbeHTTPErrorCodeStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *interfaceType;
@property (nonatomic) BOOL directPath;
@property (retain, nonatomic) NSNumber *HTTPErrorCode;

- (void).cxx_destruct;
- (id)eventName;
- (id)analyticsDict;

@end
