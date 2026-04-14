@interface VUIMetricsMediaEvent : NSObject

+ (void)recordPlay:(id)a0 isLaunchingExtras:(BOOL)a1;
+ (void)recordBGVideoPlayOfTVPMediaItem:(id)a0 contentPosition:(id)a1 isAmbient:(BOOL)a2 actionType:(id)a3;
+ (void)recordBGVideoPlayOfTVPMediaItem:(id)a0 isAmbient:(BOOL)a1;
+ (void)recordPlayOfTVPMediaItem:(id)a0;
+ (id)clickMetricsDataFromTVPMediaItem:(id)a0;
+ (id)impressionsMetricsDataFromTVPMediaItem:(id)a0;
+ (void)recordClickOfSkipInfo:(id)a0 onMediaItem:(id)a1;
+ (void)recordImpressionsOfSkipButton:(id)a0 onMediaItem:(id)a1;
+ (id)generateSkipImpressionsFromSkipInfo:(id)a0;
+ (id)_metricsDataFromTVPMediaItem:(id)a0 contentPosition:(id)a1 isBackground:(BOOL)a2 isAmbient:(BOOL)a3 actionType:(id)a4;
+ (id)_convertToMs:(id)a0;

@end
