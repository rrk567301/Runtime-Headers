@class SCNPlane;

@interface OKWidgetSceneKitPlane : OKWidgetSceneKitGeometry {
    SCNPlane *_plane;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingWidth:(double)a0;
- (void)setSettingHeight:(double)a0;
- (void)setSettingWidthSegmentCount:(long long)a0;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (double)settingWidth;
- (double)settingHeight;
- (long long)settingWidthSegmentCount;
- (long long)settingHeightSegmentCount;

@end
