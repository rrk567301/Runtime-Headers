@interface HMDNetworkInfoController : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ dataSource;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)obtainNetworkInfoProto;

@end
