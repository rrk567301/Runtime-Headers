@class NSSet, PGManagerWorkingContext, NSObject;
@protocol OS_os_log;

@interface PGRelatedComputer : NSObject {
    PGManagerWorkingContext *_workingContext;
    NSSet *_blockedFeatures;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)stringFromPGRelatedType:(unsigned long long)a0;
+ (id)searchNodesInGraph:(id)a0 forAsset:(id)a1 inMoment:(id)a2;

- (void).cxx_destruct;
- (char)exportMatchingResultsForAsset:(id)a0 relatedType:(unsigned long long)a1 toURL:(id)a2 error:(id *)a3;
- (char)exportMatchingResultsForMoment:(id)a0 relatedType:(unsigned long long)a1 toURL:(id)a2 error:(id *)a3;
- (id)initWithWorkingContext:(id)a0 blockedFeatures:(id)a1;
- (id)relatedCollectionsForAsset:(id)a0 relatedType:(unsigned long long)a1 options:(id)a2 error:(id *)a3;
- (id)relatedCollectionsForAssetCollection:(id)a0 relatedType:(unsigned long long)a1 options:(id)a2 curationContext:(id)a3 error:(id *)a4;
- (id)relatedCollectionsForMoment:(id)a0 relatedType:(unsigned long long)a1 options:(id)a2 error:(id *)a3;
- (id)relatedCollectionsForPersonLocalIdentifiers:(id)a0 relatedType:(unsigned long long)a1 options:(id)a2 error:(id *)a3;
- (id)_diverseResultsFromMatchingResults:(id)a0 inGraph:(id)a1 timeShuffleDate:(id)a2 matchingOptions:(id)a3 options:(id)a4;
- (id)_fileURLForMomentNode:(id)a0 inGraph:(id)a1 relatedType:(unsigned long long)a2 focusOnAsset:(id)a3 toURL:(id)a4;
- (void)_generateTitleForRelatedResults:(id)a0 withGraph:(id)a1 referenceEvent:(id)a2 referenceAsset:(id)a3;
- (id)_postProcessMatchingResults:(id)a0 inGraph:(id)a1 matchingOptions:(id)a2 options:(id)a3;
- (id)_referenceAssetWithLocalIdentifier:(id)a0;
- (id)_relatedCollectionBetweenHighlight:(id)a0 andAssetCollection:(id)a1 relatedType:(unsigned long long)a2 needsDebugInfo:(char)a3 needsDiversityInfo:(char)a4;
- (id)_relatedCollectionBetweenMoment:(id)a0 andAssetCollection:(id)a1 relatedType:(unsigned long long)a2 needsDebugInfo:(char)a3 needsDiversityInfo:(char)a4;
- (id)_relatedCollectionsForDefaultAssetCollection:(id)a0 relatedType:(unsigned long long)a1 options:(id)a2 assetCollectionForKeywords:(id)a3 curationContext:(id)a4 error:(id *)a5;
- (id)_relatedCollectionsForMemoryTripOrWeekend:(id)a0 relatedType:(unsigned long long)a1 options:(id)a2 assetCollectionForKeywords:(id)a3 curationContext:(id)a4 error:(id *)a5;
- (id)_stringFromRelatedType:(unsigned long long)a0;
- (id)_tripsForTargetDomain:(unsigned short)a0 inGraph:(id)a1;
- (id)_upNextCollectionsForAssetCollection:(id)a0 options:(id)a1 curationContext:(id)a2 error:(id *)a3;
- (id)_weekendsForTargetDomain:(unsigned short)a0 inGraph:(id)a1;
- (id)relatedCollectionBetweenAsset:(id)a0 andAssetCollection:(id)a1 relatedType:(unsigned long long)a2 needsDebugInfo:(char)a3;
- (id)relatedCollectionBetweenAssetCollection:(id)a0 andAssetCollection:(id)a1 relatedType:(unsigned long long)a2 curationContext:(id)a3 needsDebugInfo:(char)a4;
- (id)relatedCollectionsForDefaultAssetCollection:(id)a0 relatedType:(unsigned long long)a1 options:(id)a2 curationContext:(id)a3 error:(id *)a4;
- (id)relatedCollectionsForHighlight:(id)a0 relatedType:(unsigned long long)a1 options:(id)a2 generateTitles:(char)a3 error:(id *)a4;
- (id)relatedCollectionsForMemoryTripOrWeekend:(id)a0 relatedType:(unsigned long long)a1 options:(id)a2 curationContext:(id)a3 error:(id *)a4;
- (id)relatedCollectionsForMoment:(id)a0 relatedType:(unsigned long long)a1 options:(id)a2 generateTitles:(char)a3 error:(id *)a4;

@end
