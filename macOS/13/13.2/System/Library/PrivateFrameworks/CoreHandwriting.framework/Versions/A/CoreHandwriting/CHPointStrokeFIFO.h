@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO

@property (retain, nonatomic) CHDrawing *strokes;
@property (retain, nonatomic) CHDrawing *drawing;

- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (id)initWithFIFO:(id)a0;
- (void)addPoint:(SEL)a0;

@end
