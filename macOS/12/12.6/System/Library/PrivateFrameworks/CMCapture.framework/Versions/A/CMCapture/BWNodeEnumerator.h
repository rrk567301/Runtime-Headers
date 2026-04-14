@class BWGraph, NSMutableDictionary;

@interface BWNodeEnumerator : NSEnumerator {
    BWGraph *_graph;
    unsigned long long _depth;
    NSMutableDictionary *_nodeVisitCountMap;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithGraph:(id)a0;
- (unsigned long long)_updateVisitedCount:(id)a0;

@end
