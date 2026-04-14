@class NSArray, NSString;

@interface iCloudSettings.ManageStorageThermometer : NSObject {
    void /* function */ sections;
    void /* function */ otherAppsDisplayLabel;
    void /* function */ dimmedSectionColor;
    void /* function */ usageLabel;
}

@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSString *otherAppsDisplayLabel;
@property (nonatomic, readonly) NSString *dimmedSectionColor;
@property (nonatomic, readonly) NSString *usageLabel;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
