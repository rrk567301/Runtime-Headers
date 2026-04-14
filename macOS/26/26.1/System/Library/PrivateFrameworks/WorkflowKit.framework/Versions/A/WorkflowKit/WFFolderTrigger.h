@class NSSet;

@interface WFFolderTrigger : WFFilesystemTrigger

@property (copy, nonatomic) NSSet *fileChangeTypes;
@property (nonatomic) BOOL ignoreSubfolders;

+ (BOOL)supportsSecureCoding;
+ (id)addedFilesEventInfoKey;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (id)modifiedFilesEventInfoKey;
+ (id)removedFilePathsEventInfoKey;
+ (id)rootFolderEventInfoKey;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (Class)shortcutInputContentItemClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)canEnable;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedDescriptionWithConfigurationSummaryUsingShortForm:(BOOL)a0;
- (id)localizedPastTenseDescription;
- (id)contentStateUsingURL:(id)a0 trackedNodeID:(id)a1 ignoringSubfolders:(BOOL)a2;
- (BOOL)hasValidConfiguration;
- (BOOL)supportsDirectories;

@end
