@interface _TtC12UniversalHIDP33_77F0A1D2252CCF67CE1080DE620C755225HIDVirtualServiceDelegate : NSObject <HIDVirtualEventServiceDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ service;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyEventMatching:(id)a0 forService:(id)a1;
- (void)notification:(long long)a0 withProperty:(id)a1 forService:(id)a2;
- (id)propertyForKey:(id)a0 forService:(id)a1;
- (char)setOutputEvent:(id)a0 forService:(id)a1;
- (char)setProperty:(id)a0 forKey:(id)a1 forService:(id)a2;

@end
