@interface SFAuthorization : NSObject <NSSecureCoding> {
    struct AuthorizationOpaqueRef { } *_authorization;
    id _reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)authorization;
+ (id)authorizationWithFlags:(unsigned int)a0 rights:(const struct { unsigned int x0; struct *x1; } *)a1 environment:(const struct { unsigned int x0; struct *x1; } *)a2;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (BOOL)obtainWithRights:(const struct { unsigned int x0; struct *x1; } *)a0 flags:(unsigned int)a1 environment:(const struct { unsigned int x0; struct *x1; } *)a2 authorizedRights:(struct **)a3 error:(id *)a4;
- (struct AuthorizationOpaqueRef { } *)authorizationRef;
- (BOOL)obtainWithRight:(char *)a0 flags:(unsigned int)a1 error:(id *)a2;
- (id)initWithFlags:(unsigned int)a0 rights:(const struct { unsigned int x0; struct *x1; } *)a1 environment:(const struct { unsigned int x0; struct *x1; } *)a2;
- (void)invalidateCredentials;
- (int)permitWithRights:(const struct { unsigned int x0; struct *x1; } *)a0 flags:(unsigned int)a1 environment:(const struct { unsigned int x0; struct *x1; } *)a2 authorizedRights:(struct { unsigned int x0; struct *x1; } *)a3;
- (int)permitWithRight:(char *)a0 flags:(unsigned int)a1;
- (void)invalidateCredentials:(BOOL)a0;

@end
