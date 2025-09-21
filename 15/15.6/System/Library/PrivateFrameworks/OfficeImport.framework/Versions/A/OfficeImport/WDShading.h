@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nilShading;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)style;
- (void)setStyle:(int)a0;
- (id)background;
- (void)setBackground:(id)a0;
- (id)foreground;
- (void)setForeground:(id)a0;
- (char)isEqualToShading:(id)a0;
- (void)setShading:(id)a0;

@end
