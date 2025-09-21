@interface HMSymptom : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long type;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;

@end
