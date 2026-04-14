@class SCNTorus;

@interface OKWidgetSceneKitTorus : OKWidgetSceneKitGeometry {
    SCNTorus *_thorus;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)settingRingRadius;
- (void)setSettingRingRadius:(double)a0;
- (double)settingPipeRadius;
- (void)setSettingPipeRadius:(double)a0;
- (long long)settingRingSegmentCount;
- (void)setSettingRingSegmentCount:(long long)a0;
- (long long)settingPipeSegmentCount;
- (void)setSettingPipeSegmentCount:(long long)a0;

@end
