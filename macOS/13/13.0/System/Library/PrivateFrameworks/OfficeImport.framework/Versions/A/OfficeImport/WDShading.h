@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)nilShading;
+ (id)autoForegroundColor;
+ (id)autoBackgroundColor;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (int)style;
- (void)setStyle:(int)a0;
- (id)background;
- (id)foreground;
- (void)setForeground:(id)a0;
- (void)setBackground:(id)a0;
- (BOOL)isEqualToShading:(id)a0;
- (void)setShading:(id)a0;

@end
