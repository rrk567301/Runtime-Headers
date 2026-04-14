@protocol _TtP25CloudSubscriptionFeatures21AssetsStatusProviding_;

@interface CloudSubscriptionFeatures.Assets : SwiftNativeNSObject <CloudSubscriptionFeatures.AssetsStatusProviding> {
    void /* unknown type, empty encoding */ latestStatus;
    void /* unknown type, empty encoding */ catalogClient;
}

@property (class, nonatomic, readonly) id<_TtP25CloudSubscriptionFeatures21AssetsStatusProviding_> shared;

- (id)init;
- (void)assetStatusWithCompletionHandler:(void (^)(BOOL, BOOL))a0;
- (void)resetCachedStatusWithCompletionHandler:(void (^)(void))a0;

@end
