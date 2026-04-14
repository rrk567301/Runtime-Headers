@class SUCorePolicyDDMConfiguration;

@interface SUOSUManagedGlobalSettings : NSObject

@property (retain) SUCorePolicyDDMConfiguration *ddmConfiguration;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)globalSettings;
- (BOOL)adminInstallRequired;
- (BOOL)automaticallyDownload;
- (BOOL)automaticallyDownloadManaged;
- (BOOL)automaticallyInstallOSUpdates;
- (BOOL)automaticallyInstallOSUpdatesManaged;
- (BOOL)automaticallyInstallSystemAndSecurityUpdates;
- (BOOL)automaticallyInstallSystemAndSecurityUpdatesManaged;
- (id)daysToSeconds:(id)a0;
- (BOOL)enableGlobalNotifications;
- (BOOL)enableRapidSecurityResponse;
- (BOOL)enableRapidSecurityResponseRollback;
- (id)majorOSDeferralPeriod;
- (id)minorOSDeferralPeriod;
- (id)nonOSDeferralPeriod;

@end
