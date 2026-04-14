@class PGDejunkerDeduperOptions, PGCurationOptions, NSString, NSMutableDictionary, PGKeyAssetCurationOptions, PGManager;

@interface PGDefaultEnrichmentProfile : NSObject <PGEnrichmentProfile>

@property (class, readonly) unsigned long long durationForSummary;
@property (class, readonly) long long cardinalModeForSummary;

@property (readonly, nonatomic) PGManager *manager;
@property (readonly, nonatomic) PGCurationOptions *curationOptions;
@property (readonly, nonatomic) PGKeyAssetCurationOptions *keyAssetCurationOptions;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL collectsDebugInfo;
@property (readonly) NSMutableDictionary *debugInfos;
@property (retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions;
@property (readonly, nonatomic) unsigned short targetEnrichmentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (BOOL)canUseLocationInformationWithHighlightInfo:(id)a0 graph:(id)a1;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;
- (id)highlightInfoWithHighlight:(id)a0 graph:(id)a1 highlightTailorContext:(id)a2;
- (double)promotionScoreWithHighlightInfo:(id)a0;
- (id)titleWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 curatedAssets:(id)a2 keyAsset:(id)a3 createVerboseTitle:(BOOL)a4;
- (id)momentTitleByMomentUUIDWithHighlightInfo:(id)a0;
- (id)keyAssetWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 graph:(id)a2 progressBlock:(id /* block */)a3;
- (id)extendedCurationWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)summaryCurationWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (unsigned short)enrichmentStateWithHighlightInfo:(id)a0;
- (id)curationOptionsForForHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1;
- (id)keyAssetCurationCriteriaWithHighlightInfo:(id)a0 graph:(id)a1;
- (id)debugInfoDictionaryByAddingItemInfosToDebugInfo:(id)a0;
- (id)faceInfosWithAsset:(id)a0;

@end
