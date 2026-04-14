@class NSMutableDictionary, FI_TIconViewSettings, FI_TListViewSettings;

@interface FI_TStandardViewSettings : NSObject {
    struct TNSRef<NSMutableDictionary, void> { NSMutableDictionary *fRef; } _settings;
    struct TNSRef<FI_TIconViewSettings, void> { FI_TIconViewSettings *fRef; } _iconViewSettings;
    struct TNSRef<FI_TListViewSettings, void> { FI_TListViewSettings *fRef; } _listViewSettings;
}

@property (retain, nonatomic) FI_TIconViewSettings *iconViewSettings;
@property (retain, nonatomic) FI_TListViewSettings *listViewSettings;

+ (void)finalize;
+ (id)standardViewSettings;
+ (id)standardViewSettingsWithRegID:(int)a0;
+ (id)standardSearchViewSettings;
+ (void)saveStandardViewSettingsForNewUser;
+ (id)listViewSettingsFromDefaults;
+ (id)iconViewSettingsFromDefaultsForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)save;
- (id)iconViewSettings;
- (id)listViewSettings;
- (id)initForRegID:(int)a0;
- (void)setIconViewSettings:(id)a0;
- (void)setListViewSettings:(id)a0;

@end
