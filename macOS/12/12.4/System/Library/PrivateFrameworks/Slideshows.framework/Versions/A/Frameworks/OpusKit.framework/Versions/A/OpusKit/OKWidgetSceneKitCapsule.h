@class SCNCapsule;

@interface OKWidgetSceneKitCapsule : OKWidgetSceneKitGeometry {
    SCNCapsule *_capsule;
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
- (void)setSettingCapSegmentCount:(long long)a0;
- (void)setSettingCapRadius:(double)a0;
- (long long)settingRadialSegmentCount;
- (long long)settingCapSegmentCount;
- (double)settingCapRadius;

@end
