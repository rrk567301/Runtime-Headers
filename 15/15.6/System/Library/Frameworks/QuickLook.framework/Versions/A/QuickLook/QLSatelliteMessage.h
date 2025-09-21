@class NSUUID, NSObject;
@protocol OS_xpc_object;

@interface QLSatelliteMessage : NSObject {
    NSObject<OS_xpc_object> *_message;
}

@property int type;
@property (copy) NSUUID *uuid;
@property (readonly) NSObject<OS_xpc_object> *xpcMessage;
@property (readonly) NSObject<OS_xpc_object> *xpcConnection;

+ (void)setIsForTesting:(char)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)getUUIDBytes:(unsigned char[16])a0;
- (id)initWithXPCMessage:(id)a0;
- (char)sendReply:(id)a0;
- (void)setRequest:(struct __QLRequest { } *)a0;
- (struct __QLRequest { } *)copyRequest;
- (char)hasRequestInfo;
- (char)sendOnConnection:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void)setUUIDBytes:(unsigned char[16])a0;

@end
