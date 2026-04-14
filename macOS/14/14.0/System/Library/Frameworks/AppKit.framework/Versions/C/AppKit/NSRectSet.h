@interface NSRectSet : NSObject <NSCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_rects;
    unsigned long long _count;
}

+ (void)initialize;
+ (id)emptyRectSet;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (id)initWithRegion:(id)a0;
- (void)addClip;
- (void)setClip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)convertFromAncestor:(id)a0 toView:(id)a1 clipTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)fill;
- (void)fillExactInterior;
- (id)initWithCopyOfRects:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(unsigned long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)intersectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rects;
- (void)setEmpty;
- (void)stroke;
- (void)strokeExactInterior;
- (void)subtractRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
