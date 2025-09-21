@interface VCPCNNEspressoContext : NSObject

@property (readonly, nonatomic) void *espressoContext;

+ (void *)createContextPreferred;
+ (void *)createContextWithForceCPU;
+ (void *)createContextWithMPSGraph;
+ (void *)sharedContextPreferred:(char)a0;
+ (void *)sharedContextWithForceCPU:(char)a0;
+ (void *)sharedContextWithMPSGraph:(char)a0;
+ (char)supportGPU;

- (void)dealloc;
- (id)initWithForceCPU:(char)a0 forceNNGraph:(char)a1 shared:(char)a2;

@end
