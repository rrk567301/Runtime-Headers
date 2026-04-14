@class MLPMRContextImpl;

@interface MLPMRContext : NSObject {
    MLPMRContextImpl *impl;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (void)cleanupFromTerminate;
+ (void)registerForCleanup;

- (id)applicationName;
- (void)setParameters:(id)a0;
- (id)logPath;
- (id)init;
- (void)dealloc;
- (struct MLPMRInstrument { void /* function */ **x0; struct __CFString *x1; } *)cppInstrument:(id)a0;
- (void *)instrument:(id)a0;

@end
