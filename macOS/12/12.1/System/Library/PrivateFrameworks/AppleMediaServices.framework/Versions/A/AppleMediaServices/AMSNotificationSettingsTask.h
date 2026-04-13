@class NSString, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSNotificationSettingsTask : AMSTask <AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;

- (void).cxx_destruct;
- (id)fetchAllSettings;
- (id)_generateParametersForItems:(id)a0;
- (id)initWithIdentifier:(id)a0 account:(id)a1 bag:(id)a2;
- (id)fetchSettingForIdentifier:(id)a0;
- (id)fetchSettingsForSections:(id)a0;
- (id)updateSettings:(id)a0;

@end
