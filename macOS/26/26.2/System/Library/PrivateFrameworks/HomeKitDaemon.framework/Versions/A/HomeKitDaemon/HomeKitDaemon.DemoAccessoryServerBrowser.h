@interface HomeKitDaemon.DemoAccessoryServerBrowser : HAPAccessoryServerBrowser {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ delegateQueue;
    void /* unknown type, empty encoding */ browsing;
    void /* unknown type, empty encoding */ discoveredAccessoryServers;
}

@property (nonatomic, readonly) long long linkType;

- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (id)initWithQueue:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
