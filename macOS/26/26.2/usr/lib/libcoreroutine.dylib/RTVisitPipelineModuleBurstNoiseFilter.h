@class NSString, NSMutableArray, RTDistanceCalculator;

@interface RTVisitPipelineModuleBurstNoiseFilter : NSObject <RTVisitPipelineModule>

@property (readonly, nonatomic) BOOL firstTimeProcessingModule;
@property (readonly, nonatomic) NSMutableArray *potentialNoiseLocations;
@property (readonly, nonatomic) unsigned long long lastProcessedIndex;
@property (readonly, nonatomic) double maximumFlankDistance;
@property (readonly, nonatomic) double minimumNoiseToLeftFlankDistance;
@property (readonly, nonatomic) unsigned long long maximumWindowSize;
@property (readonly, nonatomic) double maxHorizontalAccuracy;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getIndexInArray:(id)a0 followedByCount:(unsigned long long)a1;

- (id)initWithMaximumFlankDistance:(double)a0 minimumNoiseToLeftFlankDistance:(double)a1 maximumWindowSize:(unsigned long long)a2 maxHorizontalAccuracy:(double)a3;
- (id)initWithHyperParameter:(id)a0;
- (void)removeNoiseLocations;
- (void)discardObsoleteLocations;
- (void)filterNoise;
- (void).cxx_destruct;
- (void)identifyNoiseInWindowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)getFilteredLocations;
- (id)initWithMaximumFlankDistance:(double)a0 minimumNoiseToLeftFlankDistance:(double)a1 maximumWindowSize:(unsigned long long)a2 maxHorizontalAccuracy:(double)a3 distanceCalculator:(id)a4;
- (unsigned long long)getFirstUnprocessableIndex;
- (id)process:(id)a0;
- (void)addLocations:(id)a0;
- (void)setLastProcessedIndex:(unsigned long long)a0;
- (unsigned long long)getFirstIndexToProcess;

@end
