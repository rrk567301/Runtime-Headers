@class SCNFloor;

@interface OKWidgetSceneKitFloor : OKWidgetSceneKitGeometry {
    SCNFloor *_floor;
}

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingObjectForKey:(id)a0;
- (void)dealloc;
- (void)setSettingReflectivity:(double)a0;
- (double)settingReflectivity;

@end
