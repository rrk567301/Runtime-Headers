@class NSArray, PGManagerWorkingContext, NSObject, PGMoodGenerationContext;
@protocol OS_dispatch_group, OS_os_log;

@interface PGHighlightTailor : NSObject {
    PGManagerWorkingContext *_workingContext;
    NSArray *_enrichmentProfiles;
    NSObject<OS_dispatch_group> *_enrichmentCommitGroup;
    PGMoodGenerationContext *_moodGenerationContext;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (char)itemScoreIsAutoplayable:(double)a0;

- (void).cxx_destruct;
- (id)initForTesting;
- (id)initWithWorkingContext:(id)a0;
- (id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)a0 options:(unsigned long long)a1;
- (id)enrichmentValuesForHighlight:(id)a0 usingEnrichmentProfile:(id)a1 graph:(id)a2 options:(unsigned long long)a3 reportChangedValuesOnly:(char)a4 highlightTailorContext:(id)a5 progressBlock:(id /* block */)a6;
- (id)assetSortDescriptors;
- (id)bestEnrichmentProfileForHighlight:(id)a0 options:(unsigned long long)a1;
- (id)computeChangedVisibilityScoresForItems:(id)a0;
- (char)enrichAllHighlightsWithOptions:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (char)enrichDayHighlights:(id)a0 dayGroupHighlights:(id)a1 withOptions:(unsigned long long)a2 progressBlock:(id /* block */)a3;
- (char)enrichHighlights:(id)a0 options:(unsigned long long)a1 progressBlock:(id /* block */)a2;
- (double)highlightVisibilityWeightForItem:(id)a0;
- (id)keyAssetFromHighlight:(id)a0 sharingFilter:(unsigned short)a1;
- (char)shouldEnrichHighlight:(id)a0 withEnrichmentProfile:(id)a1 options:(unsigned long long)a2;
- (id)sortedCurationOfType:(unsigned short)a0 fromHighlight:(id)a1;
- (unsigned long long)tailorOptionsAllowedForHighlight:(id)a0 originalOptions:(unsigned long long)a1;
- (void)writeHighlightEnrichmentValues:(id)a0 toChangeRequest:(id)a1 highlight:(id)a2 options:(unsigned long long)a3;

@end
