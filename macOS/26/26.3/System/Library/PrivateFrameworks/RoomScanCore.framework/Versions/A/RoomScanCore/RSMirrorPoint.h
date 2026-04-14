@interface RSMirrorPoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void /* unknown type, empty encoding */ origin;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ reflect;

- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOrigin:(id)a0 reflect:(SEL)a1;

@end
