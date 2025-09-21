@interface CSUIOpenWithMenuConfiguration : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic) BOOL showAppStoreMenuItem;
@property (nonatomic) BOOL allowMenuWithNoApplications;
@property (nonatomic) BOOL requireOpenInPlace;
@property (nonatomic) unsigned long long bindingPreferenceDisplayStyle;
@property (nonatomic) unsigned long long representativeBundlePolicy;

+ (id)defaultConfigurationForContextualApplicationSelection;
+ (id)defaultConfigurationForDefaultApplicationSelection;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
