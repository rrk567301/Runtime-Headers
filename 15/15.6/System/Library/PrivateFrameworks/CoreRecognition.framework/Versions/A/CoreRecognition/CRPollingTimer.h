@interface CRPollingTimer : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _fireTime;
}

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } fireTime;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) char fired;
@property (nonatomic) char valid;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)evalAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
