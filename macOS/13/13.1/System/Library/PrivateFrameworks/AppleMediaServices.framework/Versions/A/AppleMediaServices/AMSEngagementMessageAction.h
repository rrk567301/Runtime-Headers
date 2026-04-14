@class NSString, NSDictionary, NSURL, AMSMetricsEvent;

@interface AMSEngagementMessageAction : NSObject

@property (copy) NSDictionary *clickstreamMetricsEvent;
@property (retain) NSURL *deepLink;
@property (retain) NSURL *iconURL;
@property (retain) AMSMetricsEvent *metricsEvent;
@property long long style;
@property (retain) NSString *title;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0;

@end
