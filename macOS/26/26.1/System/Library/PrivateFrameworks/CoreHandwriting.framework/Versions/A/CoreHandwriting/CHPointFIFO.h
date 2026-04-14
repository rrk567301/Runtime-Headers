@interface CHPointFIFO : NSObject {
    CHPointFIFO *_nextFIFO;
}

- (void)clear;
- (void)flush;
- (void)addPoint:(SEL)a0;
- (void).cxx_destruct;
- (void)emitPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
