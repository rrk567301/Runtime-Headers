@class GCHIDEventSystemClient;

@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {
    GCHIDEventSystemClient *_ioClient;
}

- (id)init;
- (id)initWithClient:(id)a0 queue:(id)a1;
- (void).cxx_destruct;

@end
