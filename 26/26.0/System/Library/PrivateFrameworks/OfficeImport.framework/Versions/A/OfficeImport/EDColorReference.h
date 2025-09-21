@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {
    EDResources *mResources;
    int mSystemColorID;
    unsigned long long mColorIndex;
    unsigned long long mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithColor:(id)a0 resources:(id)a1;
+ (id)colorReferenceWithColorIndex:(unsigned long long)a0 resources:(id)a1;
+ (id)colorReferenceWithResources:(id)a0;
+ (id)colorReferenceWithSystemColorID:(int)a0 resources:(id)a1;
+ (id)colorReferenceWithThemeIndex:(unsigned long long)a0 tint:(double)a1 resources:(id)a2;

- (BOOL)isValid;
- (double)tint;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)color;
- (unsigned long long)themeIndex;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (unsigned long long)colorIndex;
- (id)initWithColor:(id)a0 resources:(id)a1;
- (BOOL)isEqualToColorReference:(id)a0;
- (int)systemColorID;

@end
