@class _EXExtensionIdentity;
@protocol _EXNSExtensionShimImplementation;

@interface _EXNSExtensionShim : NSExtension <_EXNSExtensionShimProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestBlockLock;
    id /* block */ _requestCompletionBlock;
    id /* block */ _requestCancellationBlock;
    id /* block */ _requestInterruptionBlock;
}

@property (retain) id<_EXNSExtensionShimImplementation> _implementation;
@property (readonly) _EXExtensionIdentity *identity;
@property (readonly) id<_EXNSExtensionShimImplementation> implementation;

- (id)implementation;
- (id)initWithIdentity:(id)a0;
- (id)extensionPointIdentifier;
- (id)identifier;
- (id /* block */)requestCompletionBlock;
- (id /* block */)requestCancellationBlock;
- (void)beginExtensionRequestWithOptions:(unsigned long long)a0 inputItems:(id)a1 completion:(id /* block */)a2;
- (id)attributes;
- (struct os_unfair_lock_s { unsigned int x0; })requestBlockLock;
- (void)beginExtensionRequestWithOptions:(unsigned long long)a0 inputItems:(id)a1 listenerEndpoint:(id)a2 completion:(id /* block */)a3;
- (id)beginExtensionRequestWithOptions:(unsigned long long)a0 inputItems:(id)a1 error:(id *)a2;
- (id /* block */)requestInterruptionBlock;
- (id)beginExtensionRequestWithInputItems:(id)a0 listenerEndpoint:(id)a1 error:(id *)a2;
- (void)beginExtensionRequestWithInputItems:(id)a0 listenerEndpoint:(id)a1 completion:(id /* block */)a2;
- (void)beginExtensionRequestWithInputItems:(id)a0 completion:(id /* block */)a1;
- (void)cancelExtensionRequestWithIdentifier:(id)a0;
- (id)_init;
- (void)setRequestCancellationBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setRequestCompletionBlock:(id /* block */)a0;
- (id)beginExtensionRequestWithInputItems:(id)a0 error:(id *)a1;
- (id)version;
- (id)_beginExtensionRequest:(id)a0 error:(id *)a1;
- (BOOL)optedIn;
- (void)_beginExtensionRequest:(id)a0 completion:(id /* block */)a1;
- (void)setRequestInterruptionBlock:(id /* block */)a0;
- (id)beginExtensionRequestWithOptions:(unsigned long long)a0 inputItems:(id)a1 listenerEndpoint:(id)a2 error:(id *)a3;
- (void)beginExtensionRequest:(id)a0 completion:(id /* block */)a1;
- (id)beginExtensionRequest:(id)a0 error:(id *)a1;
- (void)beginRequest:(id)a0 completion:(id /* block */)a1;
- (id)beginRequest:(id)a0 error:(id *)a1;
- (id)initWithIdentity:(id)a0 implementation:(id)a1;
- (id)makeDefaultImplementation;

@end
