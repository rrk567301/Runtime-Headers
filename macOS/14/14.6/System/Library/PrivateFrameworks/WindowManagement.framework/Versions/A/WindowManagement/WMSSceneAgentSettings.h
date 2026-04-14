@interface WMSSceneAgentSettings : FBSSceneSettings

@property (nonatomic, readonly) BOOL inUserSet;
@property (nonatomic, readonly) BOOL mostlyOccluded;

- (id)init;
- (id)mutableCopyWithZone:(void *)a0;
- (id)initWithSettings:(id)a0;

@end
