@class NSDate, NSObject;
@protocol OS_dispatch_source;

@interface IMDispatchTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (retain, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) double timeInterval;
@property (nonatomic) char isValid;
@property (nonatomic) char repeats;
@property (copy, nonatomic) id /* block */ handlerBlock;

- (void).cxx_destruct;
- (void)fire;
- (void)invalidate;
- (void)stop;
- (id)initWithQueue:(id)a0 interval:(unsigned long long)a1 repeats:(char)a2 handlerBlock:(id /* block */)a3;
- (id)initWithQueue:(id)a0 interval:(unsigned long long)a1 repeats:(char)a2 userInfo:(id)a3 handlerBlock:(id /* block */)a4;
- (void)updateTimerInterval:(unsigned long long)a0 repeats:(char)a1;

@end
