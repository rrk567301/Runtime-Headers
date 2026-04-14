@interface HMDNetworkInfoController : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ dataSource;
}

- (void)start;
- (id)init;
- (void).cxx_destruct;
- (id)obtainNetworkInfoProto;

@end
