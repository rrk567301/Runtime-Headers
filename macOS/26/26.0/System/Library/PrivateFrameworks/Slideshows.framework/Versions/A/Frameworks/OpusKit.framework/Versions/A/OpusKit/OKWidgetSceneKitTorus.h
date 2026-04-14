@class SCNTorus;

@interface OKWidgetSceneKitTorus : OKWidgetSceneKitGeometry {
    SCNTorus *_thorus;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingPipeRadius:(double)a0;
- (void)setSettingPipeSegmentCount:(long long)a0;
- (void)setSettingRingRadius:(double)a0;
- (void)setSettingRingSegmentCount:(long long)a0;
- (double)settingPipeRadius;
- (long long)settingPipeSegmentCount;
- (double)settingRingRadius;
- (long long)settingRingSegmentCount;

@end
