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

- (id)effects;
- (id)initWithDefaults;
- (void)setStyle:(id)a0;
- (id)style;
- (void).cxx_destruct;
- (BOOL)lastColumn;
- (void)setLastColumn:(BOOL)a0;
- (void)setEffects:(id)a0;
- (BOOL)hasEffects;
- (void)setRightToLeft:(BOOL)a0;
- (BOOL)rightToLeft;
- (BOOL)bandRow;
- (BOOL)lastRow;
- (void)setFirstColumn:(BOOL)a0;
- (BOOL)bandColumn;
- (BOOL)firstColumn;
- (BOOL)firstRow;
- (BOOL)hasBandsNormalToDir:(int)a0;
- (BOOL)hasVectorNormalToDir:(int)a0 atExtremePos:(int)a1;
- (void)setBandColumn:(BOOL)a0;
- (void)setBandRow:(BOOL)a0;
- (void)setFirstRow:(BOOL)a0;
- (void)setLastRow:(BOOL)a0;

@end
