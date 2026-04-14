@interface MFPath : NSObject <NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)state;
- (BOOL)isOpen;
- (int)begin;
- (int)end;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (int)abort;
- (int)flatten;
- (int)stroke:(id)a0;
- (int)closeFigure;
- (int)widen:(id)a0;
- (int)fill:(id)a0;

@end
