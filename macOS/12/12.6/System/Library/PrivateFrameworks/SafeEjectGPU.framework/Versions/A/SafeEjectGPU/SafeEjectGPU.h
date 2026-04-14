@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SafeEjectGPU : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_array;
    NSMutableArray *_limboArray;
    NSObject<OS_dispatch_queue> *_limboQueue;
    BOOL _inLimbo;
}

+ (id)getPref:(id)a0 forApp:(id)a1;
+ (id)zombies;
+ (void)fallbackGPUEjectPolicy:(BOOL)a0;
+ (void)setPref:(id)a0 forApp:(id)a1 to:(id)a2;
+ (id)evalPref:(id)a0 forApp:(id)a1;
+ (id)evalPref:(id)a0 forBundle:(id)a1;
+ (BOOL)fixedPref:(id)a0 forApp:(id)a1;
+ (id)appsWithPref:(id)a0;
+ (void)removePref:(id)a0 forApp:(id)a1;
+ (unsigned long long)zcount;
+ (void)zkill;

- (void)dealloc;
- (id)init;
- (void)teardown;
- (id)initWithDispatchQueue:(id)a0 andChangeHandler:(id /* block */)a1;
- (unsigned long long)getPCIAddr:(unsigned long long)a0;
- (void)updateGPUNumberAtLocation;
- (void)zDrainLimbo;
- (id)gpus;
- (id)newSessionWithGPUID:(unsigned long long)a0;
- (void)generateAnalyticsReport:(BOOL)a0 forGPUId:(unsigned long long)a1 duration:(long long)a2;
- (void)gpuAppMetricsStart;
- (void)gpuAppMetricsEnd;
- (void)zrelaunch;
- (void)zcancel;

@end
