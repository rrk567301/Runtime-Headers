@class NSObject;
@protocol OS_dispatch_source;

@interface IRTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;

- (id)initWithInterval:(double)a0 repeats:(BOOL)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;

@end
