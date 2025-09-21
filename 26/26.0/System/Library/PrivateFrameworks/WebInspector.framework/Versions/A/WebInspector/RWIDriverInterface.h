@class RWIDriverConfiguration;
@protocol RWIDriverInterfaceDelegate;

@interface RWIDriverInterface : NSObject

@property (copy, nonatomic) RWIDriverConfiguration *configuration;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL isRunning;
@property (weak, nonatomic) id<RWIDriverInterfaceDelegate> delegate;

- (BOOL)stop;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)start:(id *)a0;
- (void)_changeInterfaceState:(BOOL)a0;

@end
