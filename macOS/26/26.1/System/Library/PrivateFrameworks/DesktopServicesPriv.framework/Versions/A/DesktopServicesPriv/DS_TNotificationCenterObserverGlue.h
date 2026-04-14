@interface DS_TNotificationCenterObserverGlue : NSObject {
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _invokeSimple;
    struct function<void (NSNotification *)> { struct __value_func<void (NSNotification *)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _invokeWithNote;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invoke:(id)a0;
- (id)initSimple:(const void *)a0;
- (id)initWithNote:(const void *)a0;

@end
