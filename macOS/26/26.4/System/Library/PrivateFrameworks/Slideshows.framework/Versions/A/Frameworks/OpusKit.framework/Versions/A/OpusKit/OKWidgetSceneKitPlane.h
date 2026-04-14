@class SCNPlane;

@interface OKWidgetSceneKitPlane : OKWidgetSceneKitGeometry {
    SCNPlane *_plane;
}

+ (id)supportedSettings;

- (id)settingObjectForKey:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)setSettingHeight:(double)a0;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (void)setSettingWidth:(double)a0;
- (void)setSettingWidthSegmentCount:(long long)a0;
- (double)settingHeight;
- (long long)settingHeightSegmentCount;
- (double)settingWidth;
- (long long)settingWidthSegmentCount;

@end
