@interface SLSFullScreenPidReporter : NSObject

+ (id)sharedReporter;

- (id)init;
- (BOOL)equalCurrentSeed:(unsigned long long)a0;
- (unsigned long long)incrementSeed;
- (void)receiveMessages:(id)a0;
- (void)reportFullScreenStatusWithFilter:(id)a0 andHandler:(id /* block */)a1;

@end
