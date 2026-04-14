@class WatchdogTimerItem;

@interface WatchdogTimer : NSObject {
    WatchdogTimerItem *_item;
}

+ (id)watchdogWithName:(const char *)a0;
+ (id)watchdogWithName:(const char *)a0 timeout:(unsigned int)a1;

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(const char *)a0 timeout:(unsigned int)a1;

@end
