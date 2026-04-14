@interface NISystemConfiguration : NIConfiguration

@property (nonatomic) BOOL prewarmUWB;
@property (nonatomic) BOOL prewarmSecureElementChannel;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (BOOL)_internalIsMemoryAssertionRequired;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;

@end
