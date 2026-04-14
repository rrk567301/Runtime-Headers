@interface UIPointFIFO : NSObject

@property (retain, nonatomic) UIPointFIFO *nextFIFO;

- (void)clear;
- (void)addPoint:(SEL)a0;
- (void)flush;
- (void)dealloc;
- (void)emitPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
