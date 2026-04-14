@class AMSURLTaskInfo, AMSPromise, NSURLResponse;

@interface AMSMediaInvokeAuthenticationQueuedObject : NSObject

@property (retain) NSURLResponse *response;
@property (retain) AMSURLTaskInfo *taskInfo;
@property (retain) AMSPromise *pendingPromise;
@property BOOL ignoringResult;

- (void).cxx_destruct;

@end
