@interface CTBClientAuthenticityRequestWrapper : NSObject

@property (readonly, nonatomic) struct optional<ctb::ClientAuthenticityRequest> { union { char __null_state_; struct ClientAuthenticityRequest { struct vector<ctb::ClientAuthenticityRequest::Method, std::allocator<ctb::ClientAuthenticityRequest::Method>> { struct Method *__begin_; struct Method *__end_; struct Method *__cap_; } fMethods; } __val_; } ; BOOL __engaged_; } wrapped;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithWrapped:(struct optional<ctb::ClientAuthenticityRequest> { union { char x0; struct ClientAuthenticityRequest { struct vector<ctb::ClientAuthenticityRequest::Method, std::allocator<ctb::ClientAuthenticityRequest::Method>> { struct Method *x0; struct Method *x1; struct Method *x2; } x0; } x1; } x0; BOOL x1; })a0;

@end
