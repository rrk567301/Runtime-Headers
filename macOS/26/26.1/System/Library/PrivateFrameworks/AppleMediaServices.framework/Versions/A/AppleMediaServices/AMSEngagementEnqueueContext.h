@class AMSEngagementEnqueueRequest, NSDate;

@interface AMSEngagementEnqueueContext : NSObject

@property unsigned long long signpostID;
@property (retain) NSDate *start;
@property (retain) AMSEngagementEnqueueRequest *request;

- (void).cxx_destruct;
- (id)init;

@end
