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
- (id)foreground;
- (unsigned long long)hash;
- (void)setStyle:(int)a0;
- (int)style;
- (id)description;
- (void).cxx_destruct;
- (void)setForeground:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToShading:(id)a0;
- (void)setShading:(id)a0;

@end
