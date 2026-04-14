@class NSObject;
@protocol OS_dispatch_source;

@interface Timer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

- (BOOL)isActive;
- (void)cancel;
- (void).cxx_destruct;
- (void)resetWithTimeInterval:(double)a0 block:(id /* block */)a1;
- (void)dealloc;

@end
