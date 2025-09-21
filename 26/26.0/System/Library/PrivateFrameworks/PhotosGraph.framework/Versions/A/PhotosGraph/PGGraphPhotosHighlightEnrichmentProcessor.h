@class NSString;

@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (nonatomic) unsigned long long highlightTailorOptions;
@property (readonly, nonatomic) BOOL requiresValidGraph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasCompletedEnrichmentForLibrary:(id)a0;
+ (BOOL)hasCompletedFirstTimeExperienceForLibrary:(id)a0;
+ (BOOL)_hasEnoughHighlightsInPhotoLibrary:(id)a0 atEnrichmentState:(unsigned short)a1 aboveThreshold:(double)a2;

- (id)init;
- (id)initWithHighlightTailorOptions:(unsigned long long)a0;
- (id)_dayGroupHighlightsToEnrichForDayHighlights:(id)a0 dayGroupHighlights:(id)a1;
- (void)enrichDataModelWithManager:(id)a0 curationContext:(id)a1 graphUpdateInventory:(id)a2 progressReporter:(id)a3;

@end
