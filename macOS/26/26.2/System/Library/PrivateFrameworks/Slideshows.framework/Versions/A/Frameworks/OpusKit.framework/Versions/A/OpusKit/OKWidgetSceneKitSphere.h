@class SCNSphere;

@interface OKWidgetSceneKitSphere : OKWidgetSceneKitGeometry {
    SCNSphere *_sphere;
}

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingRadius:(double)a0;
- (double)settingRadius;

@end
