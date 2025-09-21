@class NSString, RPBServer;

@interface RPBServer_Listener : NSObject <RPBServerListener> {
    RPBServer *_server;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } will_start_running_callback;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } did_start_running_callback;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } will_stop_running_callback;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } did_stop_running_callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithServer:(id)a0;
- (void).cxx_destruct;
- (void)remoteProcessingBlockServerDidStartRunning:(id)a0;
- (void)remoteProcessingBlockServerDidStopRunning:(id)a0;
- (void)remoteProcessingBlockServerWillStartRunning:(id)a0;
- (void)remoteProcessingBlockServerWillStopRunning:(id)a0;

@end
