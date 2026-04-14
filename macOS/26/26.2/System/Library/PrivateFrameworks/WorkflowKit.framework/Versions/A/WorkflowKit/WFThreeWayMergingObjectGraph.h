@class NSMapTable, NSMutableOrderedSet;

@interface WFThreeWayMergingObjectGraph : NSObject {
    id /* block */ _vertexComparator;
    NSMutableOrderedSet *_orderedVertexes;
    NSMapTable *_directSuccessorsForVertexes;
    NSMapTable *_directPredecessorsForVertexes;
}

- (void).cxx_destruct;
- (id)description;

@end
