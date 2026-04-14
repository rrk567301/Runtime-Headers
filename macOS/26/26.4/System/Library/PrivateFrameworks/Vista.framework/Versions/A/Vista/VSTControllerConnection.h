@class NSString, VSTControllerServer;

@interface VSTControllerConnection : NSObject {
    VSTControllerServer *_server;
    NSString *_clientID;
}

+ (id)connectToServer;

- (id)initWithServer:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendUpdate:(const struct ProxyRendererUpdateData { id x0; } *)a0;
- (struct optional<vst::controller::ProxyRendererOverrides> { union { char x0; struct ProxyRendererOverrides { struct ProxyRendererRecordingOptions { BOOL x0; id x1; struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; } x2; } x0; struct ProxyRendererCreateOptions { struct optional<vst::splat::shared::Primitive> { union { char x0; int x1; } x0; BOOL x1; } x0; struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; } x1; struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; } x2; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x3; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x4; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x5; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x6; } x1; struct ProxyRendererDrawOptions { struct optional<float> { union { char x0; float x1; } x0; BOOL x1; } x0; struct optional<float> { union { char x0; float x1; } x0; BOOL x1; } x1; struct optional<float> { union { char x0; float x1; } x0; BOOL x1; } x2; struct optional<float> { union { char x0; float x1; } x0; BOOL x1; } x3; struct optional<float> { union { char x0; float x1; } x0; BOOL x1; } x4; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x5; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x6; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x7; struct optional<vst::splat::shared::DebugMode> { union { char x0; int x1; } x0; BOOL x1; } x8; struct optional<vst::splat::shared::Filter> { union { char x0; int x1; } x0; BOOL x1; } x9; struct optional<float> { union { char x0; float x1; } x0; BOOL x1; } x10; } x2; } x1; } x0; BOOL x1; })pollForOverrides;

@end
