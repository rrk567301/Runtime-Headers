@protocol SystemBannerServiceProtocol;

@interface SystemBannerServiceConnection : NSObject {
    void /* unknown type, empty encoding */ connection;
}

@property (class, nonatomic, readonly) id<SystemBannerServiceProtocol> service;

- (void).cxx_destruct;
- (id)init;

@end
