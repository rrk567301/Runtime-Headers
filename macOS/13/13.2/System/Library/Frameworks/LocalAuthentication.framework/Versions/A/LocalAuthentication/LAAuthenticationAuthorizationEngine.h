@interface LAAuthenticationAuthorizationEngine : NSObject

@property (readonly, nonatomic) struct __OpaqueAuthorizationEngine { } *engine;
@property (readonly, nonatomic) const struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *callbacks;

+ (id)numberFromAuthorizationValue:(const struct AuthorizationValue { unsigned long long x0; void *x1; } *)a0;
+ (id)stringFromAuthorizationValue:(const struct AuthorizationValue { unsigned long long x0; void *x1; } *)a0;
+ (id)dataFromAuthorizationValue:(const struct AuthorizationValue { unsigned long long x0; void *x1; } *)a0;
+ (struct AuthorizationValue { unsigned long long x0; void *x1; })authorizationValueWithString:(id)a0;

- (id)initWithEngine:(struct __OpaqueAuthorizationEngine { } *)a0 callbacks:(const struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a1;
- (id)numberForHint:(char *)a0;
- (id)stringForHint:(char *)a0;
- (id)numberForTag:(char *)a0;
- (id)stringForTag:(char *)a0;
- (void)setString:(id)a0 forTag:(char *)a1 flags:(unsigned int)a2;
- (void)setData:(id)a0 forTag:(char *)a1 flags:(unsigned int)a2;

@end
