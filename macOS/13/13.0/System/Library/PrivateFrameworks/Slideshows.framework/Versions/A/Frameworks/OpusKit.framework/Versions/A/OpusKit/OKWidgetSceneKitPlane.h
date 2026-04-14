@class SCNPlane;

@interface OKWidgetSceneKitPlane : OKWidgetSceneKitGeometry {
    SCNPlane *_plane;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)settingWidth;
- (void)setSettingWidth:(double)a0;
- (double)settingHeight;
- (void)setSettingHeight:(double)a0;
- (long long)settingWidthSegmentCount;
- (void)setSettingWidthSegmentCount:(long long)a0;
- (long long)settingHeightSegmentCount;
- (void)setSettingHeightSegmentCount:(long long)a0;

@end
