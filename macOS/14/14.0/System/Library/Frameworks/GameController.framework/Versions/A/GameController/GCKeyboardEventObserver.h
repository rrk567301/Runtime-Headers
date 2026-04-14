@protocol GCKeyboardEventObserverDelegate;

@interface GCKeyboardEventObserver : NSObject {
    struct __CFMachPort { } *_eventTap;
    struct __CFRunLoopSource { } *_loopSource;
}

@property (weak, nonatomic) id<GCKeyboardEventObserverDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
