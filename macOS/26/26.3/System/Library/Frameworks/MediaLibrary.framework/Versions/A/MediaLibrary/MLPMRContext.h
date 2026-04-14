@class MLPMRContextImpl;

@interface MLPMRContext : NSObject {
    MLPMRContextImpl *impl;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)cleanupFromTerminate;
+ (void)registerForCleanup;

- (void)setParameters:(id)a0;
- (id)init;
- (id)logPath;
- (void)dealloc;
- (id)applicationName;
- (struct MLPMRInstrument { void /* function */ **x0; struct __CFString *x1; } *)cppInstrument:(id)a0;
- (void *)instrument:(id)a0;

@end
