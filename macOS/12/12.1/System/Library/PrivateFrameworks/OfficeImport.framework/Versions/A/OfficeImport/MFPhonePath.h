@class OITSUBezierPath;

@interface MFPhonePath : MFPath {
    OITSUBezierPath *m_path;
    int m_state;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
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
- (void)appendBezierPath:(id)a0 dc:(id)a1;
- (id)initWithPath:(id)a0 state:(int)a1;
- (id)getBezierPath;

@end
