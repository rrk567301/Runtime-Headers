@interface STReservableSpacePolicy : NSObject {
    _Atomic BOOL _invalidated;
}

@property (nonatomic) unsigned long long policyType;

+ (void)__setErrorForPtr:(id *)a0 code:(unsigned long long)a1;
+ (id)processPolicyWithErrorPtr:(id *)a0;
+ (id)threadPolicyWithErrorPtr:(id *)a0;

- (void)dealloc;
- (void)invalidate;
- (id)initWithPolicyType:(unsigned long long)a0 errorPtr:(id *)a1;

@end
