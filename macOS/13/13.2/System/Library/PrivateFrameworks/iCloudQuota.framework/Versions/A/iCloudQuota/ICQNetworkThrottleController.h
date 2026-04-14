@class NSUserDefaults;

@interface ICQNetworkThrottleController : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;

- (id)init;
- (void).cxx_destruct;
- (BOOL)requestShouldThrottle:(id)a0;
- (void)request:(id)a0 didCompleteWithError:(id)a1;

@end
