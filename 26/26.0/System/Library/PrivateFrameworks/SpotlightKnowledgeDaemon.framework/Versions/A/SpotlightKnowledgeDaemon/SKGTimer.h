@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SKGTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    long long _interval;
    unsigned long long _leeway;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (BOOL)isValid;
- (void)reset;
- (void)dealloc;
- (void)suspend;
- (void).cxx_destruct;
- (id)initWithTimeIntervalSinceNow:(double)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;

@end
