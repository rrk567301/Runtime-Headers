@interface NISystemConfiguration : NIConfiguration

@property (nonatomic) BOOL prewarmUWB;
@property (nonatomic) BOOL prewarmSecureElementChannel;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (BOOL)_internalIsMemoryAssertionRequired;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;

@end
