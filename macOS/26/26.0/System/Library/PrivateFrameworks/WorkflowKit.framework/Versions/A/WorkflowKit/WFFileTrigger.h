@interface WFFileTrigger : WFFilesystemTrigger

+ (BOOL)supportsSecureCoding;
+ (id)fileEventInfoKey;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (Class)shortcutInputContentItemClass;

- (id)init;
- (id)localizedDescriptionWithConfigurationSummaryUsingShortForm:(BOOL)a0;
- (id)localizedPastTenseDescription;
- (id)contentStateUsingURL:(id)a0 trackedNodeID:(id)a1;
- (BOOL)hasValidConfiguration;
- (BOOL)supportsDirectories;

@end
