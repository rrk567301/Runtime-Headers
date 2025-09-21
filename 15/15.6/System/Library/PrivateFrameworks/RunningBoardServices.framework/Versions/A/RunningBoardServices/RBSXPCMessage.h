@class NSObject, RBSXPCCoder, RBSXPCMessageReply;
@protocol OS_xpc_object;

@interface RBSXPCMessage : NSObject {
    NSObject<OS_xpc_object> *_xpc_message;
    RBSXPCCoder *_payload;
}

@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) SEL method;
@property (readonly, nonatomic) RBSXPCMessageReply *reply;

+ (id)messageForMethod:(SEL)a0 varguments:(id)a1;
+ (id)messageForXPCMessage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (oneway void)sendToConnection:(id)a0;
- (id)decodeArgumentCollection:(Class)a0 withClass:(Class)a1 atIndex:(unsigned long long)a2 allowNil:(char)a3 error:(out id *)a4;
- (id)decodeArgumentWithClass:(Class)a0 atIndex:(unsigned long long)a1 allowNil:(char)a2 error:(out id *)a3;
- (oneway void)sendToConnection:(id)a0 completion:(id /* block */)a1;
- (id)sendToConnection:(id)a0 error:(out id *)a1;
- (oneway void)sendToConnection:(id)a0 replyQueue:(id)a1 completion:(id /* block */)a2;

@end
