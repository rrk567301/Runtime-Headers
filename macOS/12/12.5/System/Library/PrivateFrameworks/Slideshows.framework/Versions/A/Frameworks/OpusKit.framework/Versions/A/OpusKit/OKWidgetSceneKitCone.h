@class SCNCone;

@interface OKWidgetSceneKitCone : OKWidgetSceneKitGeometry {
    SCNCone *_cone;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingHeight:(double)a0;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (double)settingHeight;
- (long long)settingHeightSegmentCount;
- (void)setSettingRadialSegmentCount:(long long)a0;
- (long long)settingRadialSegmentCount;
- (void)setSettingTopRadius:(double)a0;
- (void)setSettingBottomRadius:(double)a0;
- (double)settingTopRadius;
- (double)settingBottomRadius;

@end
