@class AMSURLAction, NSString;

@interface AMSOpenActionResult : NSObject

@property (retain) AMSURLAction *action;
@property (retain) NSString *buyParams;
@property BOOL engagementPresented;
@property BOOL interruptionResult;

- (void).cxx_destruct;

@end
