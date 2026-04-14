@class NSObject;
@protocol OS_dispatch_source;

@interface ULTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;

- (void)invalidate;
- (id)initWithInterval:(double)a0 repeats:(BOOL)a1 queue:(id)a2 block:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isTimerSourceNil;

@end
