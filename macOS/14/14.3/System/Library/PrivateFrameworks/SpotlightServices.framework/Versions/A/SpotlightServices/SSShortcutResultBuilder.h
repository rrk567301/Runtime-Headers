@class NSString, NSArray;

@interface SSShortcutResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isBackgroundRunnable;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *alternateNames;
@property (retain, nonatomic) NSString *numberOfActionsString;
@property (retain, nonatomic) NSString *punchoutLabel;
@property (retain, nonatomic) NSString *userActivityRequiredString;
@property (retain, nonatomic) NSString *settingsPreference;
@property (nonatomic) unsigned long long entityThumbnailDisplayStyle;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (nonatomic) unsigned long long entityBadgeType;
@property (nonatomic) BOOL isAlarmResult;
@property (nonatomic) BOOL isCustomAppAttributedShortcut;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildAppTopHitEntityCardSection;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildResult;
- (id)buildThumbnail;
- (id)buildTrailingThumbnail;
- (BOOL)resultShadowsSettingResult;

@end
