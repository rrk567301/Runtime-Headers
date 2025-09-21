@class NSString, NSArray;

@interface SSShortcutResultBuilder : SSResultBuilder

@property (nonatomic) char isBackgroundRunnable;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *alternateNames;
@property (retain, nonatomic) NSString *numberOfActionsString;
@property (retain, nonatomic) NSString *punchoutLabel;
@property (retain, nonatomic) NSString *userActivityRequiredString;
@property (retain, nonatomic) NSString *settingsPreference;
@property (nonatomic) unsigned long long entityThumbnailDisplayStyle;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (retain, nonatomic) NSString *lnPropertyIdentifier;
@property (retain, nonatomic) NSString *primaryPhrase;
@property (retain, nonatomic) NSString *biomeStreamIdentifier;
@property (nonatomic) unsigned long long entityBadgeType;
@property (nonatomic) char isAlarmResult;
@property (nonatomic) char isCustomAppAttributedShortcut;

+ (id)bundleId;
+ (char)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildAppTopHitEntityCardSection;
- (id)buildButtonItems;
- (char)buildButtonItemsAreTrailing;
- (id)buildCompactThumbnail;
- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildResult;
- (id)buildStandardThumbnail;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)buildTrailingThumbnail;
- (char)resultShadowsSettingResult;

@end
