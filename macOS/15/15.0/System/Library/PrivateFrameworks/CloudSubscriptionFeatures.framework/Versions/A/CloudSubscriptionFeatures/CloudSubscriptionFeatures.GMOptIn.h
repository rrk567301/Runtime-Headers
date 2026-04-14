@class _TtC25CloudSubscriptionFeatures7GMOptIn;

@interface CloudSubscriptionFeatures.GMOptIn : NSObject {
    void /* unknown type, empty encoding */ globalUserDefaults;
    void /* unknown type, empty encoding */ userDefaults;
}

@property (class, nonatomic, readonly) _TtC25CloudSubscriptionFeatures7GMOptIn *current;
@property (class, nonatomic, readonly) _TtC25CloudSubscriptionFeatures7GMOptIn *shared;

@property (nonatomic, readonly) BOOL isOptedInGlobalDomain;
@property (nonatomic) BOOL isOptedIn;

- (id)init;
- (void).cxx_destruct;

@end
