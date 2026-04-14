@interface TPSAppleSubscriptionValidation : TPSTargetingValidation {
    void /* unknown type, empty encoding */ subscriptionEntitlements;
    void /* unknown type, empty encoding */ segment;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTargetContext:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
