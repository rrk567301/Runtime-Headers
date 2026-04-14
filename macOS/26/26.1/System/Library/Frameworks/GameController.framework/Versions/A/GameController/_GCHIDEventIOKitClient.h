@class GCHIDEventSystemClient;

@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {
    GCHIDEventSystemClient *_ioClient;
}

- (id)initWithClient:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
