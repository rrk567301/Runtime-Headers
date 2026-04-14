@interface CHPointFIFO : NSObject

@property (retain, nonatomic) CHPointFIFO *nextFIFO;

- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (id)initWithFIFO:(id)a0;
- (void)emitPoint:(SEL)a0;
- (void)addPoint:(SEL)a0;

@end
