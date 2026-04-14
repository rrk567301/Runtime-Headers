@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO

@property (retain, nonatomic) CHDrawing *strokes;
@property (retain, nonatomic) CHDrawing *drawing;

- (void)dealloc;
- (void)clear;
- (void)flush;
- (void)addPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
