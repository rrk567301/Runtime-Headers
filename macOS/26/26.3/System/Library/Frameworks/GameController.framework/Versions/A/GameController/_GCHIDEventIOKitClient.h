@class GCHIDEventSystemClient;

@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {
    GCHIDEventSystemClient *_ioClient;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0 queue:(id)a1;

@end
