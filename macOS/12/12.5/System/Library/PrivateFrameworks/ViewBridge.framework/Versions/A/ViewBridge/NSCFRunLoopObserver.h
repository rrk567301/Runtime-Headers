@class NSMutableArray;

@interface NSCFRunLoopObserver : NSObject {
    unsigned long long _activities;
    NSMutableArray *_modes;
    NSMutableArray *_observers;
    struct __CFRunLoop { } *_loop;
}

+ (id)observerWithActivities:(unsigned long long)a0;
+ (id)describeActivity:(unsigned long long)a0;

- (void)dealloc;
- (void)observeMode:(struct __CFString { } *)a0 withBlock:(id /* block */)a1;
- (id)initWithActivities:(unsigned long long)a0;

@end
