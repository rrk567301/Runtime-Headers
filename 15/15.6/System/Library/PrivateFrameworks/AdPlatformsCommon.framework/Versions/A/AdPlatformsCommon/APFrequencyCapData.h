@interface APFrequencyCapData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long relevantIdentifier;
@property unsigned long long value;
@property unsigned long long duration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
