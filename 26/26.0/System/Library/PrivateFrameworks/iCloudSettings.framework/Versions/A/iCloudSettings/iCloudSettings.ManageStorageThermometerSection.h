@class NSString;

@interface iCloudSettings.ManageStorageThermometerSection : NSObject {
    void /* function */ bundleId;
    void /* function */ displayLabel;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) double storagePercentage;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
