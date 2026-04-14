@class PGGraphLocationNodeCollection;

@interface PGTripMemoryTitleGenerator : PGTitleGenerator {
    PGGraphLocationNodeCollection *_locationNodes;
}

@property (readonly, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)_typeString;
- (id)_locationTitle;
- (id)initWithMomentNodes:(id)a0 type:(unsigned long long)a1 titleGenerationContext:(id)a2;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 locationNodes:(id)a1 type:(unsigned long long)a2 titleGenerationContext:(id)a3;
- (id)_timeTitleForTrip;
- (id)_timeTitleForWeekend;
- (id)_timeTitleForTripAndWeekend;
- (id)initWithHighlightNode:(id)a0 titleGenerationContext:(id)a1;
- (BOOL)_triggerDefaultTitleGenerationIfNil;

@end
