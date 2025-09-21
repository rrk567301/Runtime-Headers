@class NSString, NSURL;
@protocol MTLCommandQueue, MTLDevice;

@interface VFXSceneLoadOptions : NSObject {
    void /* unknown type, empty encoding */ enableDeferredRendering;
    void /* function */ clientID;
    void /* unknown type, empty encoding */ metalLibraryURL;
    void /* unknown type, empty encoding */ systemRegistrationOptions;
    void /* unknown type, empty encoding */ loadPrecompiledScripts;
}

@property (nonatomic) BOOL isAuthoringWorld;
@property (nonatomic) BOOL isVFX2;
@property (nonatomic) BOOL isRenderingInRE;
@property (nonatomic) BOOL enableRuntimeScriptCompilation;
@property (nonatomic) BOOL allowLoadingFromFuture;
@property (nonatomic) BOOL setupAsTemplate;
@property (nonatomic) BOOL automaticallyPrepareScene;
@property (nonatomic) BOOL setupAsyncRuntime;
@property (nonatomic, weak) void /* function */ world;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } *asyncRuntimeLock;
@property (nonatomic) BOOL loadBindingsMetadata;
@property (nonatomic) BOOL enableParallelDecoding;
@property (nonatomic) BOOL setupRenderer;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long depthPixelFormat;
@property (nonatomic) BOOL enableDeferredRendering;
@property (nonatomic) char internalPixelFormatDepth;
@property (nonatomic) BOOL useGammaBlending;
@property (nonatomic) BOOL doNotClearRenderOutput;
@property (nonatomic, retain) id<MTLDevice> device;
@property (nonatomic, retain) id<MTLCommandQueue> commandQueue;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, copy) NSURL *metalLibraryURL;
@property (nonatomic) struct { struct __vfx_counters *x0; } counterStorage;
@property (nonatomic) int peerPid;
@property (nonatomic) unsigned int peerTaskIdentity;

- (id)init;
- (void).cxx_destruct;
- (void)registerRESystems;
- (void)registerREinVFX2Systems;
- (void)registerVFX2AuthoringSystems:(BOOL)a0;

@end
