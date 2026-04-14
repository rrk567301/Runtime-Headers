@interface PKImageDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long tintColor;
@property (readonly, nonatomic) BOOL hasBackground;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
