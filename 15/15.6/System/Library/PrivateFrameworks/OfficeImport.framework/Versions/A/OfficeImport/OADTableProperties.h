@class NSString, OADTableStyle, NSArray;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
    OADTableStyle *mStyle;
    char mRightToLeft;
    char mFirstRow;
    char mFirstColumn;
    char mLastRow;
    char mLastColumn;
    char mBandRow;
    char mBandColumn;
    NSArray *mEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)style;
- (void)setStyle:(id)a0;
- (char)lastColumn;
- (void)setLastColumn:(char)a0;
- (id)effects;
- (void)setEffects:(id)a0;
- (char)hasEffects;
- (id)initWithDefaults;
- (void)setRightToLeft:(char)a0;
- (char)rightToLeft;
- (char)bandRow;
- (char)lastRow;
- (void)setFirstColumn:(char)a0;
- (char)bandColumn;
- (char)firstColumn;
- (char)firstRow;
- (char)hasBandsNormalToDir:(int)a0;
- (char)hasVectorNormalToDir:(int)a0 atExtremePos:(int)a1;
- (void)setBandColumn:(char)a0;
- (void)setBandRow:(char)a0;
- (void)setFirstRow:(char)a0;
- (void)setLastRow:(char)a0;

@end
