@class AMSMetricsEvent, NSArray, NSDictionary, AMSEngagementMessageAction, NSURL, NSString, AMSEngagementRequest;

@interface AMSEngagementMessageRequest : NSObject

@property (retain) NSArray *actions;
@property (retain) NSDictionary *appearanceInfo;
@property (retain) AMSEngagementMessageAction *defaultAction;
@property (retain) AMSEngagementRequest *engagementRequest;
@property (retain) NSURL *iconURL;
@property (retain) AMSMetricsEvent *metricsEvent;
@property long long presentationAction;
@property long long style;
@property (copy) NSString *subtitle;
@property (copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0;
- (id)makeDialogRequest;
- (id)_actionForMessageAction:(id)a0;

@end
