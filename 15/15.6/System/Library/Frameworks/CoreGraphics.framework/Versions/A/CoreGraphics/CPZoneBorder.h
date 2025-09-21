@class NSMutableArray, CPPage;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
    CPPage *page;
    NSMutableArray *ownerArray;
    NSMutableArray *graphicObjects;
    NSMutableArray *neighbors;
    NSMutableArray *intersections;
    char isHorizontal;
    char hasForwardVector;
    char hasBackwardVector;
    double overhangMin;
    double overhangMax;
}

+ (void)addIntersectionBetweenBorder:(id)a0 andBorder:(id)a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extendRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)outerVertices:(struct CGPoint { double x0; double x1; } *)a0 fromBorders:(id)a1 swollenBy:(double)a2;
+ (void)removeIntersectionBetweenBorder:(id)a0 andBorder:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (char)isHorizontal;
- (char)isVertical;
- (id)page;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)compareYBounds:(id)a0;
- (void)setSide:(int)a0 ofPage:(id)a1;
- (long long)compareXBounds:(id)a0;
- (void)removeFromArray;
- (void)removeLooseThreadsStartingFrom:(id)a0;
- (void)addGraphicObject:(id)a0;
- (void)addNeighbor:(id)a0;
- (void)addToArray:(id)a0;
- (void)addToArray:(id)a0 atIndex:(unsigned int)a1;
- (void)combine:(id)a0;
- (char)continues:(id)a0;
- (id)copyWithoutIntersections;
- (char)crosses:(id)a0;
- (char)extractCycleTo:(id)a0 goingForward:(char)a1 startingAtIndex:(unsigned int)a2;
- (char)extractCycleTo:(id)a0 goingForward:(char)a1 throughIntersectionIndex:(unsigned int)a2 returningTo:(id)a3 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (id)getNextBorder:(unsigned int)a0;
- (id)graphicObjectAtIndex:(unsigned int)a0;
- (unsigned int)graphicObjectCount;
- (id)graphicObjects;
- (char)hasBackwardVector;
- (char)hasClockwiseVectorAtIndex:(unsigned int)a0 startingForward:(char)a1;
- (char)hasCounterclockwiseVectorAtIndex:(unsigned int)a0 startingForward:(char)a1;
- (char)hasForwardVector;
- (char)hasNeighborShape:(id)a0;
- (char)hasNeighborShape:(id)a0 atSide:(int)a1;
- (char)hasVectorGoingForward:(char)a0 startingAtIndex:(unsigned int *)a1;
- (unsigned int)indexOfIntersectionWith:(id)a0;
- (id)initSuper;
- (id)initWithGraphicObject:(id)a0;
- (void)instantiateVectors;
- (unsigned int)intersectionCount;
- (char)intersectsWith:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)neighborAtIndex:(unsigned int)a0;
- (unsigned int)neighborCount;
- (id)ownerArray;
- (void)removeFromArrayAtIndex:(unsigned int)a0;
- (void)removeGraphicObjectAtIndex:(unsigned int)a0;
- (void)removeNeighborAtIndex:(unsigned int)a0;
- (void)setHasBackwardVector:(char)a0;
- (void)setHasForwardVector:(char)a0;
- (void)trimToLastIntersections;
- (char)windsClockwiseOnto:(id)a0;
- (long long)zOrder;

@end
