@class NSMutableDictionary, FI_TIconViewSettings, FI_TListViewSettings;

@interface FI_TStandardViewSettings : NSObject {
    NSMutableDictionary *_settings;
    FI_TIconViewSettings *_iconViewSettings;
    FI_TListViewSettings *_listViewSettings;
}

@property (retain, nonatomic) FI_TIconViewSettings *iconViewSettings;
@property (retain, nonatomic) FI_TListViewSettings *listViewSettings;

+ (void)finalize;
+ (id)iconViewSettingsFromDefaultsForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (id)listViewSettingsFromDefaults;
+ (void)saveStandardViewSettingsForNewUser;
+ (id)standardSearchViewSettings;
+ (id)standardViewSettings;

- (void)save;
- (void).cxx_destruct;
- (id)initForRegID:(int)a0;

@end
