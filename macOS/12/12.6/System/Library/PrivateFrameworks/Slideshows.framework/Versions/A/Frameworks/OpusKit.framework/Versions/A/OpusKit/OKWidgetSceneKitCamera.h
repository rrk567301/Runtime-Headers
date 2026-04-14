@class SCNCamera;

@interface OKWidgetSceneKitCamera : OKWidgetSceneKitNode {
    SCNCamera *_camera;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingCameraName:(id)a0;
- (void)setSettingZNear:(double)a0;
- (void)setSettingZFar:(double)a0;
- (void)setSettingYFov:(double)a0;
- (void)setSettingXFov:(double)a0;
- (void)setSettingUsesOrthographicProjection:(BOOL)a0;
- (id)settingCameraName;
- (double)settingZNear;
- (double)settingZFar;
- (double)settingYFov;
- (double)settingXFov;
- (BOOL)settingUsesOrthographicProjection;

@end
