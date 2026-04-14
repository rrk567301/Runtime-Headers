@interface TraceManager : NSObject

+ (id)tailspinDumpOptions;

- (id)init;
- (void)clearDirectory;
- (id)dumpTailspin:(id)a0;
- (id)dumpTailspinAsync:(id)a0;
- (void)setDefaultConfig;
- (void)setTestConfig;

@end
