@class RWIDriverConfiguration;
@protocol RWIDriverInterfaceDelegate;

@interface RWIDriverInterface : NSObject

@property (copy, nonatomic) RWIDriverConfiguration *configuration;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) char isRunning;
@property (weak, nonatomic) id<RWIDriverInterfaceDelegate> delegate;

- (void).cxx_destruct;
- (char)stop;
- (id)initWithConfiguration:(id)a0;
- (char)start:(id *)a0;
- (void)_changeInterfaceState:(char)a0;

@end
