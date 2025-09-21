@interface RTISessionOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char shouldResign;
@property (nonatomic) char animated;
@property (nonatomic) long long offscreenDirection;
@property (nonatomic) char enhancedWindowingModeEnabled;

+ (id)defaultOptions;
+ (id)defaultBeginOptions;
+ (id)defaultEndOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
