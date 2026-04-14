@interface WMSMutableSceneAgentSettings : FBSMutableSceneSettings

@property (nonatomic) BOOL inUserSet;
@property (nonatomic) BOOL mostlyOccluded;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithSettings:(id)a0;

@end
