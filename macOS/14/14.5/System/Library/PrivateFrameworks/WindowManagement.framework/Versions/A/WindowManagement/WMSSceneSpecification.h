@interface WMSSceneSpecification : FBSSceneSpecification

@property (nonatomic, readonly) Class hostAgentClass;
@property (nonatomic, readonly) Class clientAgentClass;
@property (nonatomic, readonly) Class settingsClass;
@property (nonatomic, readonly) Class clientSettingsClass;
@property (nonatomic, readonly) Class transitionContextClass;

- (id)init;

@end
