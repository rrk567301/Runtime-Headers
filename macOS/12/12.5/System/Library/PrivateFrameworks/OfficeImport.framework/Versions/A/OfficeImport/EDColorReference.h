@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {
    EDResources *mResources;
    int mSystemColorID;
    unsigned long long mColorIndex;
    unsigned long long mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithColorIndex:(unsigned long long)a0 resources:(id)a1;
+ (id)colorReferenceWithResources:(id)a0;
+ (id)colorReferenceWithColor:(id)a0 resources:(id)a1;
+ (id)colorReferenceWithThemeIndex:(unsigned long long)a0 tint:(double)a1 resources:(id)a2;
+ (id)colorReferenceWithSystemColorID:(int)a0 resources:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)color;
- (double)tint;
- (unsigned long long)themeIndex;
- (id)initWithResources:(id)a0;
- (int)systemColorID;
- (BOOL)isEqualToColorReference:(id)a0;
- (unsigned long long)colorIndex;
- (id)initWithColor:(id)a0 resources:(id)a1;

@end
