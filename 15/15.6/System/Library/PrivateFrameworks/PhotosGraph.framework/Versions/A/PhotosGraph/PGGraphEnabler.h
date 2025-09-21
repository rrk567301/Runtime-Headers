@class PGGraph;

@interface PGGraphEnabler : NSObject

@property (readonly) PGGraph *graph;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (char)locationIsFrequent:(id)a0;
- (char)locationIsNearMyHomeOrWork:(id)a0;

@end
