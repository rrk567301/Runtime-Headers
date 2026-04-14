@class NSObject;
@protocol OS_dispatch_queue;

@interface VEEspressoModel : NSObject {
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _net;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _engine;
}

@property (nonatomic) long long usage;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithModelPath:(id)a0 usage:(long long)a1 useMPS:(BOOL)a2;
- (int)loadModel:(id)a0 from:(id)a1;
- (BOOL)buildModelWithConfiguration:(const char *)a0;
- (void)freeContext;
- (BOOL)initContextWithFile:(id)a0 engine:(int)a1 configuration:(const char *)a2 usePreCompiled:(BOOL)a3;
- (BOOL)initContextWithFilePath:(id)a0 engine:(int)a1 configuration:(const char *)a2 usePreCompiled:(BOOL)a3;
- (id)initWithModelName:(id)a0 configuration:(const char *)a1;
- (id)initWithModelName:(id)a0 usage:(long long)a1;
- (int)loadModelFromPath:(id)a0;
- (BOOL)switchUsage:(long long)a0;

@end
