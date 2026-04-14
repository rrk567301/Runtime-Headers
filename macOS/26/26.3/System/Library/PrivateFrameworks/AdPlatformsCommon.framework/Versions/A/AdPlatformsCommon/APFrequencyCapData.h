@interface APFrequencyCapData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long relevantIdentifier;
@property unsigned long long value;
@property unsigned long long duration;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
