@class NSString, _TtC12GameStoreKit21HostProcessIdentifier;

@interface GameStoreKit.HostProcessIdentifier : NSObject {
    void /* function */ hostBundleId;
}

@property (class, nonatomic, readonly) _TtC12GameStoreKit21HostProcessIdentifier *shared;
@property (class, nonatomic, readonly) NSString *hostBundleIdDidChangeNotification;

@property (nonatomic, copy) NSString *hostBundleId;

- (void).cxx_destruct;
- (id)init;

@end
