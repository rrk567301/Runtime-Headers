@class WatchdogTimerItem;

@interface WatchdogTimer : NSObject {
    WatchdogTimerItem *_item;
}

+ (id)watchdogWithName:(const char *)a0;
+ (id)watchdogWithName:(const char *)a0 timeout:(unsigned int)a1;

- (void)dealloc;
- (void)cancel;
- (id)initWithName:(const char *)a0 timeout:(unsigned int)a1;
- (void).cxx_destruct;

@end
