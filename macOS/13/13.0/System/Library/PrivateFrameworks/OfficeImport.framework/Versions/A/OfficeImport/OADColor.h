@class NSMutableArray;

@interface OADColor : NSObject <NSCopying> {
    NSMutableArray *mTransforms;
}

+ (id)rgbColorWithColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (float)alphaWithColor:(id)a0;
+ (id)tsuColorWithColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (id)tsuColorWithRed:(float)a0 green:(float)a1 blue:(float)a2;
+ (id)tsuColorWithRgbColor:(id)a0;
+ (int)mapSchemeColorID:(int)a0 colorMap:(id)a1;
+ (id)basicMapOfColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (id)mapAdjustedColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)transforms;
- (void)addTransform:(id)a0;
- (void)setTransforms:(id)a0;
- (void)addTransformOfType:(int)a0;
- (void)addTransformOfType:(int)a0 value:(float)a1;
- (id)colorForStyleColor:(id)a0;

@end
