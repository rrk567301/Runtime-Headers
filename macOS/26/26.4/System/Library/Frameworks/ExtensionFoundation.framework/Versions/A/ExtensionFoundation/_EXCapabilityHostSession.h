@class _EXExtensionProcess, _EXCapabilityEndpoint;

@interface _EXCapabilityHostSession : NSObject {
    void /* unknown type, empty encoding */ _inner;
}

@property (nonatomic, readonly) _EXCapabilityEndpoint *capabilityEndpoint;
@property (nonatomic, readonly) _EXExtensionProcess *process;

+ (void)sessionWithConfiguration:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)makeXPCConnectionWithError:(id *)a0;

@end
