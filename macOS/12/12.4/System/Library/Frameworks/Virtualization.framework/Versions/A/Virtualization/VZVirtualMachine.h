@class _VZDebugStub, NSArray, NSString, VZVirtualMachineConfiguration, NSObject, NSMutableArray;
@protocol VZVirtualMachineDelegate, OS_dispatch_queue, OS_xpc_object;

@interface VZVirtualMachine : NSObject {
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _messenger_queue;
    NSObject<OS_xpc_object> *_connection;
    struct shared_ptr<Vz::SharedRamManager> { struct SharedRamManager *__ptr_; struct __shared_weak_count *__cntrl_; } _shared_ram_manager;
    VZVirtualMachineConfiguration *_configuration;
    NSArray *_audioDevices;
    NSArray *_graphicsDevices;
    NSArray *_keyboards;
    NSArray *_pointingDevices;
    NSArray *_multiTouchDevices;
    NSArray *_serialPorts;
    NSMutableArray *_USBDevices;
    struct optional<_VZDebugStub *> { union { char __null_state_; _VZDebugStub *__val_; } ; BOOL __engaged_; } _debugStub;
    unsigned int _currentDeviceIdentifier;
    struct unique_ptr<MessengerImpl, std::default_delete<MessengerImpl>> { struct __compressed_pair<MessengerImpl *, std::default_delete<MessengerImpl>> { struct MessengerImpl *__value_; } __ptr_; } _messenger;
}

@property (class, readonly, getter=isSupported) BOOL supported;

@property (readonly) NSArray *_graphicsDevices;
@property (readonly) NSArray *_keyboards;
@property (readonly) NSArray *_pointingDevices;
@property (readonly) NSArray *_multiTouchDevices;
@property (readonly) NSArray *_serialPorts;
@property (readonly) _VZDebugStub *_debugStub;
@property (readonly) NSString *_stateDescription;
@property (readonly, copy) NSArray *_USBDevices;
@property (readonly) BOOL _canAttachUSBDevices;
@property (readonly) BOOL _canDetachUSBDevices;
@property (readonly) BOOL _canCreateCore;
@property (readonly) int _serviceProcessIdentifier;
@property long long state;
@property (weak) id<VZVirtualMachineDelegate> delegate;
@property (readonly) BOOL canStart;
@property (readonly) BOOL canStop;
@property (readonly) BOOL canPause;
@property (readonly) BOOL canResume;
@property (readonly) BOOL canRequestStop;
@property (readonly, copy) NSArray *directorySharingDevices;
@property (readonly, copy) NSArray *memoryBalloonDevices;
@property (readonly, copy) NSArray *networkDevices;
@property (readonly, copy) NSArray *socketDevices;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)resumeWithCompletionHandler:(id /* block */)a0;
- (id)_audioDevices;
- (void)pauseWithCompletionHandler:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 queue:(id)a1;
- (void)_startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)requestStopWithError:(id *)a0;
- (BOOL)_canAttachUSBDevice:(id)a0;
- (BOOL)_canDetachUSBDevice:(id)a0;
- (BOOL)_attachUSBDevice:(id)a0 error:(id *)a1;
- (BOOL)_detachUSBDevice:(id)a0 error:(id *)a1;
- (void)_createCoreWithCompletionHandler:(id /* block */)a0;
- (void)_getUSBControllerLocationIDWithCompletionHandler:(id /* block */)a0;

@end
