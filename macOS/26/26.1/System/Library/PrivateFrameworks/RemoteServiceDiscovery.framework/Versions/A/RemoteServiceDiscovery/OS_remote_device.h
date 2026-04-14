@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface OS_remote_device : NSObject <RemoteDeviceCommon> {
    char *device_name;
    char *device_alias;
}

@property (readonly, nonatomic) const char *device_name;
@property (readonly, nonatomic) char *uuid;
@property (readonly, nonatomic) char *device_alias;
@property (readonly, nonatomic) unsigned int type;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dq;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSObject<OS_xpc_object> *properties;
@property (nonatomic) unsigned int type;
@property (nonatomic) char *uuid;
@property (nonatomic) unsigned long long device_id;
@property (nonatomic) unsigned long long messaging_protocol_version;
@property (nonatomic) BOOL remotexpc_tls_enabled;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (copy, nonatomic) id /* block */ connected_callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connected_callback_queue;
@property (retain, nonatomic) OS_remote_device *connected_callback_self_retain;
@property (copy, nonatomic) id /* block */ disconnected_callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *disconnected_callback_queue;
@property (retain, nonatomic) OS_remote_device *disconnected_callback_self_retain;

- (BOOL)hasServiceWithName:(const char *)a0 peerMessage:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyProperty:(char *)a0 allowSensitive:(BOOL)a1;
- (id)init;

@end
