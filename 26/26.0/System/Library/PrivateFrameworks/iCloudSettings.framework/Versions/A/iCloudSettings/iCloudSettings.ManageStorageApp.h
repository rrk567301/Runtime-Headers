@class NSString, NSArray, _TtC14iCloudSettings19ManageStorageAction, _TtC14iCloudSettings23ManageStorageAppIconURL;

@interface iCloudSettings.ManageStorageApp : NSObject {
    void /* function */ label;
    void /* function */ detailLabel;
    void /* function */ detailLabelColor;
    void /* function */ bundleIds;
    void /* function */ thermometerUsageLabel;
    void /* unknown type, empty encoding */ category;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly) NSString *detailLabelColor;
@property (nonatomic, copy) NSArray *bundleIds;
@property (nonatomic, readonly) BOOL fetchLocally;
@property (nonatomic, readonly) BOOL applySystemStyle;
@property (nonatomic, readonly) _TtC14iCloudSettings23ManageStorageAppIconURL *iconUrls;
@property (nonatomic, readonly) _TtC14iCloudSettings23ManageStorageAppIconURL *detailViewIconUrls;
@property (nonatomic, readonly) _TtC14iCloudSettings19ManageStorageAction *action;
@property (nonatomic, readonly) NSString *thermometerUsageLabel;
@property (nonatomic, readonly) BOOL showInAppList;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
