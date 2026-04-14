@interface NISystemConfiguration : NIConfiguration

@property (nonatomic) BOOL prewarmUWB;
@property (nonatomic) BOOL prewarmSecureElementChannel;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (BOOL)_internalIsMemoryAssertionRequired;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
