@class SCNBox;

@interface OKWidgetSceneKitBox : OKWidgetSceneKitGeometry {
    SCNBox *_box;
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
- (double)settingLength;
- (void)setSettingLength:(double)a0;
- (double)settingChamferRadius;
- (void)setSettingChamferRadius:(double)a0;
- (double)settingWidthSegmentCount;
- (void)setSettingWidthSegmentCount:(long long)a0;
- (long long)settingHeightSegmentCount;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (long long)settingLengthSegmentCount;
- (void)setSettingLengthSegmentCount:(long long)a0;
- (long long)settingChamferSegmentCount;
- (void)setSettingChamferSegmentCount:(long long)a0;

@end
