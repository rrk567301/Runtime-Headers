@interface STStopwatchShowAndPerformStopwatchAction : AFSiriRequest {
    unsigned long long _action;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)action;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithAction:(unsigned long long)a0;

@end
