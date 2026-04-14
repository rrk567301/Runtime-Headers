@class CPChunk, CPCluster;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable> {
    CPChunk *parentChunk;
    BOOL shapesAreVectorGraphics;
    unsigned int shapeCount;
    id *shapes;
    double pageSpread;
    CPCluster *cluster;
    unsigned int groupInfoCount;
    struct { unsigned int x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; } *groupInfoArray;
    BOOL disposed;
}

+ (BOOL)makeCompoundGraphicsInZonesOf:(id)a0;

- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithGraphicsIn:(id)a0 ofClass:(Class)a1;
- (BOOL)findClusterLevel;
- (void)addGroupInfoWithIndex:(unsigned int)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (void)coalesceShapeGroups;
- (BOOL)makeCompoundGraphicsFromShapeGroups;
- (BOOL)groupOverlappingGraphics;
- (BOOL)makeCompoundGraphics;

@end
