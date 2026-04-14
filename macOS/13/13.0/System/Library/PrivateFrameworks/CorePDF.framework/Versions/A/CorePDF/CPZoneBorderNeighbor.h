@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying> {
    CPShape *neighborShape;
    int shapeSide;
}

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initSuper;
- (void)setNeighborShape:(id)a0;
- (id)neighborShape;
- (void)setShapeSide:(int)a0;
- (int)shapeSide;

@end
