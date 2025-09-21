@interface CTLazuliSuggestedActionSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct SuggestedActionSettings { int x0; } *)a0;
- (char)isEqualToCTLazuliSuggestedActionSettings:(id)a0;

@end
