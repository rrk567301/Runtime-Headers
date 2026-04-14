@interface WFFileTrigger : WFFilesystemTrigger

+ (BOOL)supportsSecureCoding;
+ (id)fileEventInfoKey;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanationWithContext:(id)a0;
+ (Class)shortcutInputContentItemClass;

- (id)init;
- (id)localizedDescriptionWithConfigurationSummaryUsingShortForm:(BOOL)a0;
- (id)localizedPastTenseDescription;
- (id)contentStateUsingURL:(id)a0 trackedNodeID:(id)a1 ignoringSubfolders:(BOOL)a2;
- (BOOL)hasValidConfiguration;
- (BOOL)supportsDirectories;

@end
