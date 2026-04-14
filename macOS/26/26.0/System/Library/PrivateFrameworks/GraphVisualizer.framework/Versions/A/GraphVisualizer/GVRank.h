@class GVGraph, NSMutableArray;

@interface GVRank : NSObject {
    NSMutableArray *nodes;
    double separation;
}

@property GVGraph *graph;
@property (readonly) long long rank;
@property (weak, nonatomic) GVRank *prevRank;
@property (weak, nonatomic) GVRank *nextRank;
@property (readonly) unsigned long long count;
@property (readonly, nonatomic) double breadth;
@property (readonly, nonatomic) double length;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)debugDescription;
- (void)dealloc;
- (void)removeNode:(id)a0;
- (void)addNode:(id)a0;
- (id)reverseObjectEnumerator;
- (id)nodes;
- (void)buildNodeIterators;
- (void)centerNode:(id)a0 at:(struct CGPoint { double x0; double x1; })a1;
- (void)centerNodesWithRespectoTo:(id)a0;
- (void)exchangeNodeAtIndex:(unsigned long long)a0 withNodeAtIndex:(unsigned long long)a1;
- (unsigned long long)inCrossings;
- (id)initWithRank:(long long)a0 separation:(struct CGSize { double x0; double x1; })a1 graph:(id)a2;
- (id)neighborsOfNode:(id)a0;
- (unsigned long long)outCrossings;
- (struct CGSize { double x0; double x1; })sizeForDummy;
- (void)sortByIndex;

@end
