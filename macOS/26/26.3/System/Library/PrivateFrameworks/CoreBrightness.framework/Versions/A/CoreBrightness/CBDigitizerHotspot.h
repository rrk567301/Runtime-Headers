@interface CBDigitizerHotspot : NSObject

@property int orientation;
@property float center_X;
@property float center_Y;
@property long long triggered;
@property float touchTriggerDelay;
@property float touchReleaseTime;

- (id)description;
- (id)init;
- (BOOL)isClearedAt:(float)a0;

@end
