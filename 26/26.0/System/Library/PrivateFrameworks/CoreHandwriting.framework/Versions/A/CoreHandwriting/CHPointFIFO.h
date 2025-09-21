@interface CHPointFIFO : NSObject {
    CHPointFIFO *_nextFIFO;
}

- (void)clear;
- (void)addPoint:(SEL)a0;
- (void)flush;
- (void).cxx_destruct;
- (void)emitPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
