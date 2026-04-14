@interface QCSharedTimers : NSObject {
    struct __CFArray { } *_timers;
}

+ (id)sharedTimers;

- (id)init;
- (id)description;
- (void)addClient:(id)a0 selector:(SEL)a1 frequency:(float)a2;
- (void)removeClient:(id)a0 selector:(SEL)a1;

@end
