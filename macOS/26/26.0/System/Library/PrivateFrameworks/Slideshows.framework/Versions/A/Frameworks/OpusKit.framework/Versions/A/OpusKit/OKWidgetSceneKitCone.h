@class SCNCone;

@interface OKWidgetSceneKitCone : OKWidgetSceneKitGeometry {
    SCNCone *_cone;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingBottomRadius:(double)a0;
- (void)setSettingHeight:(double)a0;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (void)setSettingRadialSegmentCount:(long long)a0;
- (void)setSettingTopRadius:(double)a0;
- (double)settingBottomRadius;
- (double)settingHeight;
- (long long)settingHeightSegmentCount;
- (long long)settingRadialSegmentCount;
- (double)settingTopRadius;

@end
