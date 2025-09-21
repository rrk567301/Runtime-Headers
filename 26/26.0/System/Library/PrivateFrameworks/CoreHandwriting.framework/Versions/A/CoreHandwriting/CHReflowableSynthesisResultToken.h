@class NSDictionary, CHDrawing;

@interface CHReflowableSynthesisResultToken : CHReflowableTextToken

@property (readonly, copy, nonatomic) CHDrawing *drawing;
@property (readonly, nonatomic) NSDictionary *debugInfo;

+ (id)reflowableTokensFromSynthesisResult:(id)a0 principalPoints:(id)a1 shouldCancel:(id /* block */)a2;

- (void)setDebugInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDrawing:(id)a0 string:(id)a1 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a2 principalPoints:(id)a3 textSize:(id)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 hasPrecedingSpace:(BOOL)a6;
- (id)initWithDrawing:(id)a0 string:(id)a1 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a2 textSize:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 hasPrecedingSpace:(BOOL)a5;
- (id)initWithSynthesisResult:(id)a0 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a1 textSize:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 hasPrecedingSpace:(BOOL)a4;

@end
