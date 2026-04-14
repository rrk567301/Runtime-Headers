@protocol GCMouseEventObserverDelegate;

@interface GCMouseEventObserver : NSObject {
    struct __CFMachPort { } *_eventTap;
    struct __CFRunLoopSource { } *_loopSource;
}

@property (weak, nonatomic) id<GCMouseEventObserverDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
