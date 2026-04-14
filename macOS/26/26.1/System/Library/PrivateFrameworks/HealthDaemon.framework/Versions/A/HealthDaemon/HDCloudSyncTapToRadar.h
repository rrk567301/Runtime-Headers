@interface HDCloudSyncTapToRadar : NSObject

+ (BOOL)isTapToRadarAllowed;
+ (void)openTapToRadarWithTitle:(id)a0 description:(id)a1;
+ (void)openTapToRadarWithTitle:(id)a0 description:(id)a1 completion:(id /* block */)a2;
+ (void)showTapToRadarRequestWithTitle:(id)a0 message:(id)a1 proceed:(id /* block */)a2 disable:(id /* block */)a3 completion:(id /* block */)a4;

@end
