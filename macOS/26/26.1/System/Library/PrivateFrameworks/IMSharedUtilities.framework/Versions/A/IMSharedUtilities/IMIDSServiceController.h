@class NSString;

@interface IMIDSServiceController : NSObject

@property (retain, nonatomic) NSString *debuggingService;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)logIfDebuggingService:(id)a0 method:(const char *)a1;

@end
