@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _shadowFlags;
    NSColor *_shadowColor;
    double _reservedFloat[3];
    void *_reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property struct CGSize { double width; double height; } shadowOffset;
@property double shadowBlurRadius;
@property (copy) NSColor *shadowColor;

+ (id)shadow;
+ (void)initialize;
+ (id)defaultShadowColor;

- (void)applyToGraphicsContext:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)set;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithShadow:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
