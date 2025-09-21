@class NSMutableDictionary;

@interface SectionL3Scores : NSObject {
    float l3Score[3];
    float l3ScoreLegacy[3];
}

@property (nonatomic) float iFunScore;
@property (nonatomic) float serverRelevanceScore;
@property (retain, nonatomic) NSMutableDictionary *features;
@property (nonatomic) float modelScore;

+ (void)getComparableL3Score:(id)a0 sectionMapping:(id)a1 bundleId1:(id)a2 bundleId2:(id)a3 score1:(float *)a4 score2:(float *)a5 usePommesScore:(char)a6 useLegacyScore:(char)a7;
+ (void)getComparableModelL3Score:(id)a0 bundleId1:(id)a1 bundleId2:(id)a2 score1:(float *)a3 score2:(float *)a4;
+ (float)normalizeLegacyScore:(float)a0;

- (id)init;
- (void).cxx_destruct;
- (char)computeScore:(id)a0 rankingConfig:(id)a1 hasGoodLocalResult:(char)a2 pos:(int)a3 queryContext:(id)a4;
- (id)getIFunScore:(id)a0 rankingConfig:(id)a1 isLocal:(char)a2 result:(id)a3 queryContext:(id)a4 isQUIntent:(char *)a5;
- (float)getL3Score:(int)a0 isLegacy:(char)a1;
- (float)getResultScore:(id)a0 section:(id)a1 isLegacy:(char)a2;

@end
