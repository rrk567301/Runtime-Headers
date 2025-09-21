@interface TPSAppleSubscriptionValidation : TPSTargetingValidation {
    void /* unknown type, empty encoding */ subscriptionEntitlements;
    void /* unknown type, empty encoding */ segment;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithTargetContext:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
