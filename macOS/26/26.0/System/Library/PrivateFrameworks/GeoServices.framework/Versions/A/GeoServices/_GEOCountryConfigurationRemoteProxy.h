@class NSString, NSObject;
@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate;

@interface _GEOCountryConfigurationRemoteProxy : NSObject <GEOConfigChangeListenerDelegate, _GEOCountryConfigurationServerProxy> {
    NSObject<OS_dispatch_queue> *_queue;
    id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _countryCodeChangedToken;
    int _providersChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)dealloc;
- (void)fetchGEOIPCountryCode:(id)a0 auditToken:(id)a1 callback:(id /* block */)a2;
- (void)updateCountryCodeWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (id)_xpcConnection;
- (void).cxx_destruct;

@end
