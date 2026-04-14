@class NSArray;

@interface CHReflowableTextResultToken : CHReflowableTextToken

@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, copy, nonatomic) NSArray *nonTextStrokeIdentifiers;

+ (id)reflowableTokensWithContext:(id)a0 contextStrokes:(id)a1 strokeProvider:(id)a2 shouldExtractFromRefinablePath:(BOOL)a3 SkipLineOrientationEstimate:(BOOL)a4 shouldCancel:(id /* block */)a5;
+ (id)reflowableTokensWithTextResult:(id)a0 principalLineResult:(id)a1 strokeProvider:(id)a2 shouldCancel:(id /* block */)a3;
+ (id)revertTokenOrder:(id)a0 textResult:(id)a1 initialStrokes:(id)a2 strokeProvider:(id)a3 shouldExtractFromRefinablePath:(BOOL)a4;

- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 strokeIdentifiers:(id)a1 nonTextStrokeIdentifiers:(id)a2 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a3 principalPoints:(id)a4 textSize:(id)a5 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 hasPrecedingSpace:(BOOL)a7;

@end
