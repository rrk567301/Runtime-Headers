@interface NISystemConfiguration : NIConfiguration

@property (nonatomic) BOOL prewarmUWB;
@property (nonatomic) BOOL prewarmSecureElementChannel;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (BOOL)_internalIsMemoryAssertionRequired;
- (id)descriptionInternal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
