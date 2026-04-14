@class WatchdogTimerItem;

@interface WatchdogTimer : NSObject {
    WatchdogTimerItem *_item;
}

+ (id)watchdogWithName:(const char *)a0;
+ (id)watchdogWithName:(const char *)a0 timeout:(unsigned int)a1;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(const char *)a0 timeout:(unsigned int)a1;

@end
