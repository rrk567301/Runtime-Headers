@class MLPMRContextImpl;

@interface MLPMRContext : NSObject {
    MLPMRContextImpl *impl;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (void)cleanupFromTerminate;
+ (void)registerForCleanup;

- (void)dealloc;
- (id)init;
- (void)setParameters:(id)a0;
- (id)applicationName;
- (void *)instrument:(id)a0;
- (id)logPath;
- (struct MLPMRInstrument { void /* function */ **x0; struct __CFString *x1; } *)cppInstrument:(id)a0;

@end
