@class NSObject;
@protocol OS_dispatch_source;

@interface Timer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetWithTimeInterval:(double)a0 block:(id /* block */)a1;
- (BOOL)isActive;

@end
