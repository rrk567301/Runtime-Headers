@interface RTISessionOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldResign;
@property (nonatomic) long long offscreenDirection;

+ (id)defaultOptions;
+ (id)defaultBeginOptions;
+ (id)defaultEndOptions;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
