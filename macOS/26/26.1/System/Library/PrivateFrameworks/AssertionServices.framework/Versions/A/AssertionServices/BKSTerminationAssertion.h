@class NSString, BKSTerminationContext;

@interface BKSTerminationAssertion : BKSAssertion

@property (readonly, nonatomic) unsigned long long efficacy;
@property (readonly, copy, nonatomic) NSString *targetBundleIdentifier;
@property (readonly, copy, nonatomic) BKSTerminationContext *context;

- (unsigned long long)_bksErrorForRBSRequestError:(unsigned long long)a0;
- (id)initWithBundleIdentifier:(id)a0 efficacy:(unsigned long long)a1 name:(id)a2 withHandler:(id /* block */)a3;
- (BOOL)acquire;
- (void)invalidate;
- (id)initWithBundleIdentifier:(id)a0 efficacy:(unsigned long long)a1 name:(id)a2 context:(id)a3 withHandler:(id /* block */)a4;
- (void).cxx_destruct;

@end
