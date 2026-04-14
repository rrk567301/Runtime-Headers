@interface MFPath : NSObject <NSCopying>

- (int)abort;
- (BOOL)isOpen;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (int)end;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)begin;
- (int)state;
- (int)flatten;
- (int)stroke:(id)a0;
- (int)closeFigure;
- (int)fill:(id)a0;
- (int)widen:(id)a0;

@end
