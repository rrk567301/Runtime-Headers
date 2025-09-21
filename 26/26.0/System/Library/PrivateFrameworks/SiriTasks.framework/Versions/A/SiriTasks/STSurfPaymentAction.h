@class INInteraction;

@interface STSurfPaymentAction : AFSiriRequest {
    INInteraction *_interaction;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)action;
- (id)interaction;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithInteraction:(id)a0;

@end
