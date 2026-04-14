@class NSString, _TtC14iCloudSettings14iCloudPlusCard, _TtC14iCloudSettings6Action, _TtC14iCloudSettings14iCloudAppsCard, _TtC14iCloudSettings10UpsellCard, _TtC14iCloudSettings14SettingsFooter, _TtC14iCloudSettings15InformationCard, _TtC14iCloudSettings10HeaderCard, _TtC14iCloudSettings21ManageStorageViewInfo, _TtC14iCloudSettings14BackupViewInfo;

@interface ICSHomeDataModel : NSObject {
    void /* unknown type, empty encoding */ _rawJsonObject;
}

@property (nonatomic, readonly) _TtC14iCloudSettings10HeaderCard *headerCard;
@property (nonatomic, readonly) _TtC14iCloudSettings10UpsellCard *upsellCard;
@property (nonatomic, readonly) _TtC14iCloudSettings14iCloudPlusCard *icloudPlusCard;
@property (nonatomic, readonly) _TtC14iCloudSettings14iCloudAppsCard *icloudAppsCard;
@property (nonatomic, readonly) _TtC14iCloudSettings21ManageStorageViewInfo *manageStorageViewInfo;
@property (nonatomic, readonly) _TtC14iCloudSettings14BackupViewInfo *backupViewInfo;
@property (nonatomic, readonly) _TtC14iCloudSettings6Action *preLaunchAction;
@property (nonatomic, readonly) _TtC14iCloudSettings6Action *manageSubscriptionsAction;
@property (nonatomic, readonly) _TtC14iCloudSettings14SettingsFooter *settingsFooter;
@property (nonatomic, readonly) BOOL underMaintenance;
@property (nonatomic, readonly) _TtC14iCloudSettings15InformationCard *informationCard;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
