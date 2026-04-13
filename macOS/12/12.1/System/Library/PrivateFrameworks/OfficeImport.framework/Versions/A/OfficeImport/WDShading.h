@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoForegroundColor;
+ (id)autoBackgroundColor;
+ (id)nilShading;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)style;
- (void)setStyle:(int)a0;
- (id)background;
- (void)setForeground:(id)a0;
- (id)foreground;
- (void)setBackground:(id)a0;
- (void)setShading:(id)a0;
- (BOOL)isEqualToShading:(id)a0;

@end
