@interface MFPath : NSObject <NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)state;
- (int)end;
- (int)begin;
- (char)isOpen;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (int)abort;
- (int)flatten;
- (int)stroke:(id)a0;
- (int)closeFigure;
- (int)fill:(id)a0;
- (int)widen:(id)a0;

@end
