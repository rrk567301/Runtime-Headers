@interface MFPath : NSObject <NSCopying>

- (int)end;
- (BOOL)isOpen;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (int)abort;
- (int)begin;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)state;
- (int)flatten;
- (int)stroke:(id)a0;
- (int)closeFigure;
- (int)fill:(id)a0;
- (int)widen:(id)a0;

@end
