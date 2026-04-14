@interface IDSSysdiagnoseLogCollector : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)collectSysdiagnoseLog:(id /* block */)a0;
- (void)_collectSysdiagnoseLog:(id /* block */)a0;

@end
