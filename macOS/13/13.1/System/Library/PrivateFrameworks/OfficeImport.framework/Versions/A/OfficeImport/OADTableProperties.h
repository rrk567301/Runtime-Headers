@class NSString, OADTableStyle, NSArray;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
    OADTableStyle *mStyle;
    BOOL mRightToLeft;
    BOOL mFirstRow;
    BOOL mFirstColumn;
    BOOL mLastRow;
    BOOL mLastColumn;
    BOOL mBandRow;
    BOOL mBandColumn;
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
- (void)setLastColumn:(BOOL)a0;
- (BOOL)lastColumn;
- (id)effects;
- (void)setEffects:(id)a0;
- (BOOL)hasEffects;
- (BOOL)firstColumn;
- (id)initWithDefaults;
- (BOOL)rightToLeft;
- (void)setRightToLeft:(BOOL)a0;
- (BOOL)firstRow;
- (void)setFirstRow:(BOOL)a0;
- (void)setFirstColumn:(BOOL)a0;
- (BOOL)lastRow;
- (void)setLastRow:(BOOL)a0;
- (BOOL)bandRow;
- (void)setBandRow:(BOOL)a0;
- (BOOL)bandColumn;
- (void)setBandColumn:(BOOL)a0;
- (BOOL)hasBandsNormalToDir:(int)a0;
- (BOOL)hasVectorNormalToDir:(int)a0 atExtremePos:(int)a1;

@end
