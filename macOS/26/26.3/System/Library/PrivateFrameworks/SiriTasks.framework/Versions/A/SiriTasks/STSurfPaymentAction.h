@class INInteraction;

@interface STSurfPaymentAction : AFSiriRequest {
    INInteraction *_interaction;
}

+ (BOOL)supportsSecureCoding;

- (id)interaction;
- (unsigned long long)action;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithInteraction:(id)a0;

@end
