@class NSUUID, NSString, NEDNSProxyProviderProtocol, NEVPNConnection, NEConfiguration, NEConfigurationManager, NEProfileIngestionPayloadInfo, NSObject;
@protocol NEDNSProxyManagerDelegate;

@interface NEDNSProxyManager : NSObject <NEPrettyDescription> {
    char _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEVPNConnection *_connection;
    NSObject *_statusObserver;
}

@property (retain) NEConfiguration *configuration;
@property (readonly, nonatomic) NSUUID *identifier;
@property (weak) id<NEDNSProxyManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NEProfileIngestionPayloadInfo *configurationPayloadInfo;
@property (readonly, nonatomic, getter=isFromProfile) char isFromProfile;
@property (readonly, nonatomic, getter=isFromMDM) char isFromMDM;
@property (copy) NSString *localizedDescription;
@property (retain) NEDNSProxyProviderProtocol *providerProtocol;
@property (getter=isEnabled) char enabled;

+ (id)sharedManager;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)fetchStatusWithCompletionHandler:(id /* block */)a0;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;

@end
