@interface NISystemConfiguration : NIConfiguration

@property (nonatomic) char prewarmUWB;
@property (nonatomic) char prewarmSecureElementChannel;

+ (id)new;
+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (char)_internalIsMemoryAssertionRequired;

@end
