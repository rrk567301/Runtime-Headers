@class NSUUID, NSString, NSArray, NEVPNConnection, NEConfigurationManager, NEConfiguration, NEDNSSettings, NEProfileIngestionPayloadInfo, NSObject;
@protocol NEDNSSettingsManagerDelegate;

@interface NEDNSSettingsManager : NSObject <NEPrettyDescription> {
    char _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEVPNConnection *_connection;
    NSObject *_statusObserver;
    NEConfiguration *_configuration;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (weak) id<NEDNSSettingsManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic, getter=isFromProfile) char fromProfile;
@property (readonly, nonatomic, getter=isConfigurationGradeEnterprise) char configurationGradeEnterprise;
@property (getter=isEnabled) char enabled;
@property (readonly, nonatomic) NEProfileIngestionPayloadInfo *configurationPayloadInfo;
@property (copy) NSString *localizedDescription;
@property (retain) NEDNSSettings *dnsSettings;
@property (copy) NSArray *onDemandRules;

+ (id)sharedManager;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)fetchStatusWithCompletionHandler:(id /* block */)a0;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;

@end
