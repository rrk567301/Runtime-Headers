@class NSString, AMSProcessInfo;

@interface AMSSetDemoAccountTask : AMSTask

@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *password;
@property (retain) NSString *username;

- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 password:(id)a1;
- (id)performTask;

@end
