@class AMSURLAction;

@interface AMSOpenActionResult : NSObject

@property (retain) AMSURLAction *action;
@property char engagementPresented;
@property char interruptionResult;

- (void).cxx_destruct;

@end
