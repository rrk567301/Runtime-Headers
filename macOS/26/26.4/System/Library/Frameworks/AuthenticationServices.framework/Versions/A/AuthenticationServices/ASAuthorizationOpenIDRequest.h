@class NSArray, NSString;

@interface ASAuthorizationOpenIDRequest : ASAuthorizationRequest {
    NSArray *_requestedScopes;
    NSString *_state;
    NSString *_nonce;
    NSString *_requestedOperation;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (copy, nonatomic) NSArray *requestedScopes;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *requestedOperation;

- (void).cxx_destruct;
- (id)init;
- (BOOL)supportsStyle:(long long)a0;

@end
