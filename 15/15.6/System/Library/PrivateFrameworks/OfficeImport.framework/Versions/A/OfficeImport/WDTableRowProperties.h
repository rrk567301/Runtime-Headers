@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {
    WDTableProperties *mTableProperties;
    WDCharacterProperties *mCharacterProperties;
    unsigned char mOriginal : 1;
    unsigned char mTracked : 1;
    unsigned char mResolved : 1;
    struct { short widthBefore; int widthBeforeType; short widthAfter; int widthAfterType; long long height; int heightType; unsigned char widthBeforeOverridden : 1; unsigned char widthBeforeTypeOverridden : 1; unsigned char widthAfterOverridden : 1; unsigned char widthAfterTypeOverridden : 1; unsigned char heightOverridden : 1; unsigned char heightTypeOverridden : 1; unsigned char header : 1; unsigned char headerOverridden : 1; } mOriginalProperties;
    struct { short widthBefore; int widthBeforeType; short widthAfter; int widthAfterType; long long height; int heightType; unsigned char widthBeforeOverridden : 1; unsigned char widthBeforeTypeOverridden : 1; unsigned char widthAfterOverridden : 1; unsigned char widthAfterTypeOverridden : 1; unsigned char heightOverridden : 1; unsigned char heightTypeOverridden : 1; unsigned char header : 1; unsigned char headerOverridden : 1; } mTrackedProperties;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)height;
- (void)setHeight:(long long)a0;
- (void)addProperties:(id)a0;
- (char)header;
- (void)setHeader:(char)a0;
- (id)initWithDocument:(id)a0;
- (void)setWidthBefore:(short)a0;
- (id)tableProperties;
- (int)widthBeforeType;
- (void)setResolveMode:(int)a0;
- (void)addPropertiesValues:(struct { short x0; int x1; short x2; int x3; long long x4; int x5; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; } *)a0 to:(struct { short x0; int x1; short x2; int x3; long long x4; int x5; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; } *)a1;
- (id)characterProperties;
- (int)heightType;
- (char)isHeaderOverridden;
- (char)isHeightOverridden;
- (char)isHeightTypeOverridden;
- (char)isWidthAfterOverridden;
- (char)isWidthAfterTypeOverridden;
- (char)isWidthBeforeOverridden;
- (char)isWidthBeforeTypeOverridden;
- (int)resolveMode;
- (void)setHeightType:(int)a0;
- (void)setWidthAfter:(short)a0;
- (void)setWidthAfterType:(int)a0;
- (void)setWidthBeforeType:(int)a0;
- (short)widthAfter;
- (int)widthAfterType;
- (short)widthBefore;

@end
