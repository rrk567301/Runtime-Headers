@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSString, NSObject;
@protocol Core_Audio_Driver_Service_Client_Callback_Delegate, OS_dispatch_object;

@interface Core_Audio_Driver_Service_Client : NSObject <NSXPCListenerDelegate, Core_Audio_Driver_Service_Client_Protocol>

@property (retain, nonatomic) NSXPCConnection *connection_to_driver_service;
@property (retain, nonatomic) NSXPCConnection *connection_from_driver_service;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) struct queue { struct object { NSObject<OS_dispatch_object> *fObj; } fObj; } queue;
@property (retain, nonatomic) id<Core_Audio_Driver_Service_Client_Callback_Delegate> delegate;
@property (nonatomic) struct shared_ptr<std::function<void (std::shared_ptr<Driver_File>)>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } driver_service_undertaker;
@property (nonatomic) struct shared_ptr<Driver_File> { struct Driver_File *__ptr_; struct __shared_weak_count *__cntrl_; } driver_file;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)get_driver_name_list:(int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (void)send_endpoint_to_driver_service;
- (void)connect_to_driver_service:(struct shared_ptr<Driver_File> { struct Driver_File *x0; struct __shared_weak_count *x1; })a0;
- (void)deferred_driver_loaded:(id)a0 reply:(id /* block */)a1;
- (id)get_lazy_connection:(struct shared_ptr<Driver_File> { struct Driver_File *x0; struct __shared_weak_count *x1; })a0;
- (id)init_with_driver_service_undertaker:(struct shared_ptr<std::function<void (std::shared_ptr<Driver_File>)>> { void *x0; struct __shared_weak_count *x1; })a0;
- (int)load_driver:(struct shared_ptr<Driver_File> { struct Driver_File *x0; struct __shared_weak_count *x1; })a0 driver_endpoint:(id *)a1;
- (void)teardown_connection;
- (void)tell_driver_service_to_exit;

@end
