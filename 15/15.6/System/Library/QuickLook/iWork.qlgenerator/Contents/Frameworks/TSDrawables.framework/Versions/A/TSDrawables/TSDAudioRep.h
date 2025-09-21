@class TSDMovieInfo;

@interface TSDAudioRep : TSDMediaRep

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;

- (void)drawInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)willBeRemoved;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(char)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(char)a3 forAlphaOnly:(char)a4 drawChildren:(char)a5 keepingChildrenPassingTest:(id /* block */)a6;

@end
