@class SCNTube;

@interface OKWidgetSceneKitTube : OKWidgetSceneKitGeometry {
    SCNTube *_tube;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)settingHeight;
- (void)setSettingHeight:(double)a0;
- (long long)settingHeightSegmentCount;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (long long)settingRadialSegmentCount;
- (void)setSettingRadialSegmentCount:(long long)a0;
- (double)settingInnerRadius;
- (void)setSettingInnerRadius:(double)a0;
- (double)settingOuterRadius;
- (void)setSettingOuterRadius:(double)a0;

@end
