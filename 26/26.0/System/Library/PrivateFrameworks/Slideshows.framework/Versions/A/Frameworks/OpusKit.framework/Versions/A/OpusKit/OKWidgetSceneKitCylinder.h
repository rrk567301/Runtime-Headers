@class SCNCylinder;

@interface OKWidgetSceneKitCylinder : OKWidgetSceneKitGeometry {
    SCNCylinder *_cylinder;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingHeight:(double)a0;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (void)setSettingRadialSegmentCount:(long long)a0;
- (void)setSettingRadius:(double)a0;
- (double)settingHeight;
- (long long)settingHeightSegmentCount;
- (long long)settingRadialSegmentCount;
- (double)settingRadius;

@end
