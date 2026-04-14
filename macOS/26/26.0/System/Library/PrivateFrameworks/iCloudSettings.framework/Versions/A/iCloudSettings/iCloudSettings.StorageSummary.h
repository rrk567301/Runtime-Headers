@class NSString, _TtC14iCloudSettings6Action;

@interface iCloudSettings.StorageSummary : NSObject {
    void /* function */ subscriptionLabel;
    void /* function */ storageBarLabel;
    void /* function */ storageBarColor;
    void /* function */ usageLabel;
}

@property (nonatomic, readonly) NSString *subscriptionLabel;
@property (nonatomic, readonly) NSString *storageBarLabel;
@property (nonatomic, readonly) NSString *storageBarColor;
@property (nonatomic, readonly) unsigned long long totalStorageInBytes;
@property (nonatomic, readonly) unsigned long long usedStorageInBytes;
@property (nonatomic, readonly) NSString *usageLabel;
@property (nonatomic, readonly) _TtC14iCloudSettings6Action *action;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
