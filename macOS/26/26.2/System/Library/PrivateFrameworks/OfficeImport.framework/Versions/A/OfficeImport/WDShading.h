@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nilShading;

- (id)background;
- (void)setBackground:(id)a0;
- (void)setStyle:(int)a0;
- (id)foreground;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setForeground:(id)a0;
- (id)description;
- (int)style;
- (id)init;
- (BOOL)isEqualToShading:(id)a0;
- (void)setShading:(id)a0;

@end
