@class PKRegion;

@interface SKRegion : NSObject <NSCopying, NSSecureCoding> {
    PKRegion *_region;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const struct CGPath { } *path;

+ (id)infiniteRegion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPath:(struct CGPath { } *)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isInfinite;
- (id)initWithRadius:(float)a0;
- (id)inverseRegion;
- (id)regionByUnionWithRegion:(id)a0;
- (id)regionByDifferenceFromRegion:(id)a0;
- (id)regionByIntersectionWithRegion:(id)a0;
- (void)containsPoints:(const float *)a0 locationStride:(long long)a1 results:(char *)a2 resultsStride:(long long)a3 count:(int)a4;
- (BOOL)isEqualToRegion:(id)a0;

@end
