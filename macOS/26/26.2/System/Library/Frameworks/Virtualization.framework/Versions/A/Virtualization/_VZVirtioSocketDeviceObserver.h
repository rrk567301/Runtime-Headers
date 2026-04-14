@interface _VZVirtioSocketDeviceObserver : NSObject {
    struct unique_ptr<SocketDeviceObserverMessenger, std::default_delete<SocketDeviceObserverMessenger>> { struct { struct SocketDeviceObserverMessenger *__ptr_; } ; } _messenger;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithConnection:(id)a0 queue:(id)a1 delegate:(id)a2;

@end
