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
- (id)settingCameraName;
- (void)setSettingCameraName:(id)a0;
- (double)settingZNear;
- (void)setSettingZNear:(double)a0;
- (double)settingZFar;
- (void)setSettingZFar:(double)a0;
- (double)settingYFov;
- (void)setSettingYFov:(double)a0;
- (double)settingXFov;
- (void)setSettingXFov:(double)a0;
- (BOOL)settingUsesOrthographicProjection;
- (void)setSettingUsesOrthographicProjection:(BOOL)a0;

@end
