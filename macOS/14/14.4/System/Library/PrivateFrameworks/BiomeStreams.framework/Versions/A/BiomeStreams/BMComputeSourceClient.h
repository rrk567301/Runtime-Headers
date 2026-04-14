@class BMComputeXPCPublisherStorage, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface BMComputeSourceClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    NSString *_machServiceName;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) BMComputeXPCPublisherStorage *storage;
@property (readonly, copy, nonatomic) NSString *streamIdentifier;

+ (id)new;
+ (void)setUseSynchronousXPCMessageSending:(BOOL)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)eventsPrunedForAccount:(id)a0 remoteName:(id)a1 reason:(unsigned long long)a2;
- (id)initWithStreamIdentifier:(id)a0 domain:(unsigned long long)a1 useCase:(id)a2;
- (id)initWithStreamIdentifier:(id)a0 listenerEndpoint:(id)a1 storage:(id)a2;
- (id)initWithStreamIdentifier:(id)a0 machServiceName:(id)a1 listenerEndpoint:(id)a2 storage:(id)a3;
- (void)sendEvent:(id)a0 account:(id)a1 remoteName:(id)a2 timestamp:(double)a3 signpostID:(unsigned long long)a4 sendFullEvent:(BOOL)a5;

@end
