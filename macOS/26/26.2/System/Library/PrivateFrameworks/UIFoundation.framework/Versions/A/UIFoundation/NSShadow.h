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

+ (void)initialize;
+ (id)defaultShadowColor;
+ (id)shadow;

- (void)set;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)applyToGraphicsContext:(id)a0;
- (id)init;
- (id)initWithShadow:(id)a0;
- (void)dealloc;

@end
