@class NEFilterProviderConfiguration, NSUUID, NEConfiguration, NSString, NEConfigurationManager, NEVPNConnection, NSObject;
@protocol NEFilterManagerDelegate;

@interface NEFilterManager : NSObject <NEPrettyDescription> {
    BOOL _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEVPNConnection *_connection;
    NSObject *_statusObserver;
}

@property (retain) NEConfiguration *configuration;
@property (readonly, nonatomic) NSUUID *identifier;
@property (weak) id<NEFilterManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic, getter=isFromProfile) BOOL isFromProfile;
@property (readonly, nonatomic, getter=isFromMDM) BOOL isFromMDM;
@property (copy) NSString *localizedDescription;
@property (retain) NEFilterProviderConfiguration *providerConfiguration;
@property (getter=isEnabled) BOOL enabled;
@property long long grade;

+ (id)sharedManager;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)fetchStatusWithCompletionHandler:(id /* block */)a0;

@end
