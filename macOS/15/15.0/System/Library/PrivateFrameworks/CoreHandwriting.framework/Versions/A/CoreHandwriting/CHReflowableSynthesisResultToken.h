@class CHDrawing;

@interface CHReflowableSynthesisResultToken : CHReflowableTextToken

@property (readonly, copy, nonatomic) CHDrawing *drawing;

- (void).cxx_destruct;
- (id)initWithDrawing:(id)a0 string:(id)a1 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 hasPrecedingSpace:(BOOL)a4;
- (id)initWithSynthesisResult:(id)a0 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 hasPrecedingSpace:(BOOL)a3;

@end
