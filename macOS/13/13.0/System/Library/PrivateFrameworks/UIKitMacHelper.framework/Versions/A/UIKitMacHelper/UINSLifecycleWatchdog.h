@class NSString, _UINSLifecycleWatchdogInternal;

@interface UINSLifecycleWatchdog : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) _UINSLifecycleWatchdogInternal *innerWatchdog;

- (id)description;
- (void).cxx_destruct;
- (id)initWithStateIdentifier:(long long)a0 andTimeout:(double)a1;
- (void)cancelWatchdog;
- (id)_watchdogNameForStateIdentifier:(long long)a0;

@end
