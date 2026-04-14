@class MOAppStoreSettingsGroup, MOAccountSettingsGroup, NSDictionary, MOShieldSettingsGroup, MOManagedSettingsSettingsGroup, MOSafariSettingsGroup, MOCellularSettingsGroup, MODateAndTimeSettingsGroup, MOAllowedClientSettingsGroup, MOMediaSettingsGroup, MOApplicationSettingsGroup, MOGameCenterSettingsGroup, MODeviceActivitySettingsGroup, MOPasscodeSettingsGroup, MOSiriSettingsGroup, MOUserSettingsGroup, MOWebContentSettingsGroup;
@protocol MOSettingsReader, MOSettingsWriter;

@interface MOSettingsStore : NSObject

@property (class, readonly, retain, nonatomic) NSDictionary *directoryAttributes;
@property (class, readonly, retain, nonatomic) NSDictionary *fileAttributes;

@property (readonly, weak) id<MOSettingsReader> reader;
@property (readonly, weak) id<MOSettingsWriter> writer;
@property (readonly, retain, nonatomic) MOAccountSettingsGroup *account;
@property (readonly, retain, nonatomic) MOAllowedClientSettingsGroup *allowedClient;
@property (readonly, retain, nonatomic) MOApplicationSettingsGroup *application;
@property (readonly, retain, nonatomic) MOAppStoreSettingsGroup *appStore;
@property (readonly, retain, nonatomic) MOCellularSettingsGroup *cellular;
@property (readonly, retain, nonatomic) MODateAndTimeSettingsGroup *dateAndTime;
@property (readonly, retain, nonatomic) MODeviceActivitySettingsGroup *deviceActivity;
@property (readonly, retain, nonatomic) MOGameCenterSettingsGroup *gameCenter;
@property (readonly, retain, nonatomic) MOManagedSettingsSettingsGroup *managedSettings;
@property (readonly, retain, nonatomic) MOMediaSettingsGroup *media;
@property (readonly, retain, nonatomic) MOPasscodeSettingsGroup *passcode;
@property (readonly, retain, nonatomic) MOSafariSettingsGroup *safari;
@property (readonly, retain, nonatomic) MOShieldSettingsGroup *shield;
@property (readonly, retain, nonatomic) MOSiriSettingsGroup *siri;
@property (readonly, retain, nonatomic) MOUserSettingsGroup *user;
@property (readonly, retain, nonatomic) MOWebContentSettingsGroup *webContent;

+ (void)createSettingsDirectoryAtURL:(id)a0;
+ (id)loadSettingsAtURL:(id)a0;
+ (BOOL)saveSettings:(id)a0 toURL:(id)a1;
+ (id)loadDataAtURL:(id)a0 outError:(id *)a1;
+ (void)migrateSettingsIfNecessary:(id)a0;

- (void).cxx_destruct;
- (id)initStore;
- (id)settingKeyFromSetting:(id)a0 group:(id)a1;

@end
