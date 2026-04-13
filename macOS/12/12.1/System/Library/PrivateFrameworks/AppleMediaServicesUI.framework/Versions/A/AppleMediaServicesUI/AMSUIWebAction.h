@class NSArray, AMSUIWebClientContext, NSString, AMSMetricsEvent;

@interface AMSUIWebAction : NSObject <AMSUIWebActionRunnable>

@property (readonly) AMSMetricsEvent *actionEvent;
@property (retain) NSArray *acceptedResponseVersions;
@property (retain) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
