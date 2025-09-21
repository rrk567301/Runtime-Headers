@class NSUUID, NSString, NSArray, NEConfiguration;
@protocol NERelayManagerDelegate;

@interface NERelayManager : NSObject <NEPrettyDescription> {
    char _isShared;
    char _hasLoaded;
    char _notificationSent;
    NEConfiguration *_configuration;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (weak) id<NERelayManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic, getter=isFromProfile) char fromProfile;
@property (copy) NSString *localizedDescription;
@property (getter=isEnabled) char enabled;
@property (getter=isUIToggleEnabled) char UIToggleEnabled;
@property (retain) NSArray *relays;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *matchFQDNs;
@property (copy) NSArray *excludedDomains;
@property (copy) NSArray *excludedFQDNs;
@property (copy) NSArray *onDemandRules;

+ (id)sharedManager;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;
+ (void)loadAllManagersFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)getLastClientErrors:(double)a0 completionHandler:(id /* block */)a1;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;

@end
