@interface WFLeaveLocationTrigger : WFLocationTrigger

+ (id)localizedDisplayName;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (char)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;

- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
