@class MLPMRContextImpl;

@interface MLPMRContext : NSObject {
    MLPMRContextImpl *impl;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)cleanupFromTerminate;
+ (void)registerForCleanup;

- (id)applicationName;
- (id)logPath;
- (void)dealloc;
- (void)setParameters:(id)a0;
- (id)init;
- (struct MLPMRInstrument { void /* function */ **x0; struct __CFString *x1; } *)cppInstrument:(id)a0;
- (void *)instrument:(id)a0;

@end
