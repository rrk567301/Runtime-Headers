@class NSXPCListenerEndpoint, NSString, BMXPCConnectionWrapper, BMComputePublisherStorage;

@interface BMComputeSourceClient : NSObject {
    unsigned long long _domain;
    NSXPCListenerEndpoint *_listenerEndpoint;
    BMComputePublisherStorage *_storage;
    unsigned int _user;
    BMXPCConnectionWrapper *_connectionWrapper;
}

@property (readonly, copy, nonatomic) NSString *streamIdentifier;

+ (id)new;

- (void)eventsPrunedForAccount:(id)a0 remoteName:(id)a1 reason:(unsigned long long)a2;
- (id)initWithStreamIdentifier:(id)a0 domain:(unsigned long long)a1 listenerEndpoint:(id)a2 storage:(id)a3 user:(unsigned int)a4;
- (id)init;
- (id)_remoteObjectProxyForDomain:(unsigned long long)a0 errorHandler:(id /* block */)a1;
- (id)description;
- (id)initWithStreamIdentifier:(id)a0 domain:(unsigned long long)a1 useCase:(id)a2 user:(unsigned int)a3;
- (void)sendEvent:(id)a0 account:(id)a1 remoteName:(id)a2 timestamp:(double)a3 signpostID:(unsigned long long)a4 sendFullEvent:(BOOL)a5;
- (id)_newConnectionForDomain:(unsigned long long)a0;
- (id)initWithStreamIdentifier:(id)a0 listenerEndpoint:(id)a1 storage:(id)a2;
- (void).cxx_destruct;

@end
