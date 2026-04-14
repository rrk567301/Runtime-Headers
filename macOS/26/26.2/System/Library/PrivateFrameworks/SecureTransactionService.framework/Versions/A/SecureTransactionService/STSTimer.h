@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface STSTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *src;
@property (nonatomic) unsigned long long popTimeInSeconds;
@property (nonatomic) BOOL monotonic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)startTimer:(double)a0;
- (id)initWithCallback:(id /* block */)a0 queue:(id)a1;
- (id)initSleepTimerWithCallback:(id /* block */)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)startTimer:(double)a0 leeway:(double)a1;
- (void)stopTimer;
- (void)dealloc;

@end
