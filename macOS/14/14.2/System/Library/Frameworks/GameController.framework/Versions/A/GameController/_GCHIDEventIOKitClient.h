@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {
    struct __IOHIDEventSystemClient { } *_ioClient;
}

- (void)dealloc;
- (id)init;
- (id)initWithClient:(struct __IOHIDEventSystemClient { } *)a0 queue:(id)a1;

@end
