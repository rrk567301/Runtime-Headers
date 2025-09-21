@class NSObject;
@protocol OS_dispatch_source;

@interface IRTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithInterval:(double)a0 repeats:(char)a1 queue:(id)a2 block:(id /* block */)a3;

@end
