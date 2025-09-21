@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VCPTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    _Atomic BOOL _active;
    char _isOneShot;
    id /* block */ _block;
}

+ (id)timerWithInterval:(unsigned long long)a0 unit:(unsigned long long)a1 oneShot:(char)a2 andBlock:(id /* block */)a3;
+ (id)timerWithIntervalSeconds:(unsigned long long)a0 isOneShot:(char)a1 andBlock:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)destroy;
- (void)handleTimerEvent;
- (id)initWithIntervalNanoseconds:(unsigned long long)a0 isOneShot:(char)a1 andBlock:(id /* block */)a2;

@end
