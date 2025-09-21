@interface CTLazuliSuggestedActionRequestLocationPush : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char sendPush;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct SuggestedActionRequestLocationPush { BOOL x0; } *)a0;
- (char)isEqualToCTLazuliSuggestedActionRequestLocationPush:(id)a0;

@end
