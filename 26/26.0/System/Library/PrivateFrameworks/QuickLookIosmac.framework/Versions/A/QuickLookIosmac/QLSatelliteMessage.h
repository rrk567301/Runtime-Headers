@class NSUUID, NSObject;
@protocol OS_xpc_object;

@interface QLSatelliteMessage : NSObject {
    NSObject<OS_xpc_object> *_message;
}

@property int type;
@property (copy) NSUUID *uuid;
@property (readonly) NSObject<OS_xpc_object> *xpcMessage;
@property (readonly) NSObject<OS_xpc_object> *xpcConnection;

+ (void)setIsForTesting:(BOOL)a0;

- (void)getUUIDBytes:(unsigned char[16])a0;
- (void)setRequest:(struct __QLRequest { } *)a0;
- (id)init;
- (BOOL)sendReply:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCMessage:(id)a0;
- (struct __QLRequest { } *)copyRequest;
- (BOOL)hasRequestInfo;
- (BOOL)sendOnConnection:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void)setUUIDBytes:(unsigned char[16])a0;

@end
