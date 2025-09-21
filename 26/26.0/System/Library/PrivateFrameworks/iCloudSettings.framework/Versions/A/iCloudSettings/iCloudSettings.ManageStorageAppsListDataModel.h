@class NSArray, NSString, _TtC14iCloudSettings24ManageStorageThermometer;

@interface iCloudSettings.ManageStorageAppsListDataModel : NSObject {
    void /* unknown type, empty encoding */ _rawJsonObject;
    void /* function */ apps;
    void /* function */ genericErrorMessage;
    void /* function */ secondaryAppsSectionLabel;
}

@property (nonatomic, readonly) NSArray *apps;
@property (nonatomic, readonly) NSString *genericErrorMessage;
@property (nonatomic, readonly) _TtC14iCloudSettings24ManageStorageThermometer *thermometer;
@property (nonatomic, readonly) long long primaryAppsSectionCount;
@property (nonatomic, readonly) NSString *secondaryAppsSectionLabel;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
