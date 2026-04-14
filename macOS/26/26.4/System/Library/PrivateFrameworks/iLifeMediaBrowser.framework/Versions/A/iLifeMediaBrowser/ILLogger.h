@interface ILLogger : NSObject {
    long long _loggingLevel;
    long long _loggingDefMask;
}

+ (void)initialize;
+ (id)sharedLogger;
+ (void)cleanupFromTerminate;
+ (void)registerForCleanup;
+ (id)logDefinitionMaskNames;

- (id)init;
- (void)dealloc;
- (long long)loggingLevel;
- (void)setLoggingLevel:(long long)a0;
- (void)ILLogDef:(id)a0 defMask:(long long)a1 sender:(id)a2;
- (void)ILLog:(id)a0 logLevel:(unsigned long long)a1 sender:(id)a2;
- (long long)loggingDefMask;
- (void)setLoggingDefMask:(long long)a0;

@end
