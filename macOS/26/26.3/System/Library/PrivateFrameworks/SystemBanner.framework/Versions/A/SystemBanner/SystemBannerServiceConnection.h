@protocol SystemBannerServiceProtocol;

@interface SystemBannerServiceConnection : NSObject {
    void /* unknown type, empty encoding */ connection;
}

@property (class, nonatomic, readonly) id<SystemBannerServiceProtocol> service;

- (id)init;
- (void).cxx_destruct;

@end
