@class NSUserDefaults;

@interface ICQNetworkThrottleController : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;

- (void)request:(id)a0 didCompleteWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)requestShouldThrottle:(id)a0;

@end
