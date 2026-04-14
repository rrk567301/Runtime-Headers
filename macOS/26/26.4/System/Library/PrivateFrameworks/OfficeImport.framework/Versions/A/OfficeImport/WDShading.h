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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStyle:(int)a0;
- (int)style;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (void)setForeground:(id)a0;
- (id)description;
- (BOOL)isEqualToShading:(id)a0;
- (void)setShading:(id)a0;

@end
