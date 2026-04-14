@class _GCCurrentSkylightSessionMonitor;

@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {
    struct __IOHIDEventSystemClient { } *_ioClient;
    _GCCurrentSkylightSessionMonitor *_sessionMonitorForControlCenter;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithClient:(struct __IOHIDEventSystemClient { } *)a0 queue:(id)a1;

@end
