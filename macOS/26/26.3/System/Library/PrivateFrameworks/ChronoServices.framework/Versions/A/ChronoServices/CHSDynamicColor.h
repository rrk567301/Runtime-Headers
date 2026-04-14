@class BSColor, NSDictionary;
@protocol CHSDynamicColorCache;

@interface CHSDynamicColor : NSObject <NSSecureCoding, NSCopying> {
    BSColor *_sameColor;
    NSDictionary *_colors;
}

@property (class, readonly, nonatomic) id<CHSDynamicColorCache> instanceCacheIfExists;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isSameColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_areColorsTheSame:(id)a0;
- (id)_effectiveColors;
- (id)_initWithColors:(id)a0;
- (id)_initWithSameColor:(id)a0;
- (id)resolvedColorForColorScheme:(unsigned long long)a0 displayGamut:(unsigned long long)a1;

@end
