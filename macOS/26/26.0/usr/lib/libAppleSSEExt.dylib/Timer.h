@class NSObject;
@protocol OS_dispatch_source;

@interface Timer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

- (void)dealloc;
- (void)cancel;
- (void)resetWithTimeInterval:(double)a0 block:(id /* block */)a1;
- (BOOL)isActive;
- (void).cxx_destruct;

@end
