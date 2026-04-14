@class NSMutableDictionary, FI_TIconViewSettings, FI_TListViewSettings;

@interface FI_TStandardViewSettings : NSObject {
    NSMutableDictionary *_settings;
    FI_TIconViewSettings *_iconViewSettings;
    FI_TListViewSettings *_listViewSettings;
}

@property (retain, nonatomic) FI_TIconViewSettings *iconViewSettings;
@property (retain, nonatomic) FI_TListViewSettings *listViewSettings;

+ (void)finalize;
+ (id)standardViewSettingsWithRegID:(int)a0;
+ (id)standardViewSettings;
+ (id)standardSearchViewSettings;
+ (void)saveStandardViewSettingsForNewUser;
+ (id)listViewSettingsFromDefaults;
+ (id)iconViewSettingsFromDefaultsForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

- (void).cxx_destruct;
- (void)save;
- (id)initForRegID:(int)a0;

@end
