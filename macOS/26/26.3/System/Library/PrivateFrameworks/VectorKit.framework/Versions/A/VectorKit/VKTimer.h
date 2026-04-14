@class NSObject;
@protocol OS_dispatch_source;

@interface VKTimer : NSObject {
    NSObject<OS_dispatch_source> *_source;
}

@property (readonly, nonatomic) double nextFireDate;

- (void)invalidate;
- (void)disable;
- (void)fireAfter:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 queue:(id)a2;

@end
