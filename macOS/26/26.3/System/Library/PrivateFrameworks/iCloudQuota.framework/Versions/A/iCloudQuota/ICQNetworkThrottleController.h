@class NSUserDefaults;

@interface ICQNetworkThrottleController : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;

- (BOOL)requestShouldThrottle:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)request:(id)a0 didCompleteWithError:(id)a1;

@end
