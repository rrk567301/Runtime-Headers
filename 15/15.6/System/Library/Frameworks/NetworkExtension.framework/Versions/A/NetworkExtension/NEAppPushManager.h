@class NSArray, NSDictionary, NSString, NEConfigurationManager, NEConfiguration;
@protocol NEAppPushDelegate;

@interface NEAppPushManager : NSObject {
    char _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEConfiguration *_configuration;
    void *_nesmConnection;
}

@property (getter=isActive) char active;
@property (copy) NSArray *matchSSIDs;
@property (copy) NSArray *matchPrivateLTENetworks;
@property (copy) NSDictionary *providerConfiguration;
@property (copy) NSString *providerBundleIdentifier;
@property (weak) id<NEAppPushDelegate> delegate;
@property (copy) NSString *localizedDescription;
@property (getter=isEnabled) char enabled;

+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;

@end
