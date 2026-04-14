@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nilShading;

- (void)setBackground:(id)a0;
- (id)foreground;
- (id)background;
- (void)setStyle:(int)a0;
- (id)description;
- (id)init;
- (int)style;
- (void)setForeground:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToShading:(id)a0;
- (void)setShading:(id)a0;

@end
