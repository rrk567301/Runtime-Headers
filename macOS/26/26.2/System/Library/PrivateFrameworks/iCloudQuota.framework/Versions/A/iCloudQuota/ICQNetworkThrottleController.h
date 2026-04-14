@class NSUserDefaults;

@interface ICQNetworkThrottleController : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;

- (BOOL)requestShouldThrottle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)request:(id)a0 didCompleteWithError:(id)a1;

@end
