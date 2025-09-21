@class NSString;

@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (nonatomic) unsigned long long highlightTailorOptions;
@property (readonly, nonatomic) char curatedLibraryFTEIsReady;
@property (readonly, nonatomic) char requiresValidGraph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)hasCompletedEnrichmentForLibrary:(id)a0;
+ (char)_hasEnoughHighlightsInPhotoLibrary:(id)a0 atEnrichmentState:(unsigned short)a1 aboveThreshold:(double)a2;
+ (char)hasCompletedFirstTimeExperienceForLibrary:(id)a0;

@end
