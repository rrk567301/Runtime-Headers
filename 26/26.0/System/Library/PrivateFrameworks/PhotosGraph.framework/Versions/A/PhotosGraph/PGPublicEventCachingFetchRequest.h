@class CLSPublicEventCachingOptions, PGGraph, PGGraphMomentNodeCollection;

@interface PGPublicEventCachingFetchRequest : NSObject

@property (readonly, nonatomic) CLSPublicEventCachingOptions *cachingOptions;
@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 momentNodeCollection:(id)a1 cachingOptions:(id)a2;

@end
