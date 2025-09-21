@class NSObject;
@protocol OS_xpc_object;

@interface SCRemoteQueueXPCObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_xpc_object> *remoteQueue;
@property unsigned char queueType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
