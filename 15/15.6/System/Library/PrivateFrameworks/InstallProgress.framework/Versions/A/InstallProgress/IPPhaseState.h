@interface IPPhaseState : NSObject <NSSecureCoding> {
    unsigned long long _totalUnitCount;
    unsigned long long _completedUnitCount;
}

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
