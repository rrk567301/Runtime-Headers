@class NSString;

@interface TSDrawables.TSDWatermarkingHelper : NSObject

@property (class, nonatomic, readonly) double gracePeriod;
@property (class, nonatomic, readonly) NSString *defaultsKeyForAutomaticBlessingTimerInterval;
@property (class, nonatomic, readonly) double timerIntervalForAutomaticBlessingByInactivePremiumUser;
@property (class, nonatomic, readonly) NSString *defaultsKeyForLastPremiumUserActivityUpdateThrottle;
@property (class, nonatomic, readonly) double minimumTimeIntervalBetweenUpdatesOfLastPremiumUserActivityTimestamp;

+ (id)bakeWatermarkInto:(id)a0 geometry:(id)a1 contentsScale:(double)a2;
+ (struct CGSize { double x0; double x1; })contextSizeToCalculateLuminanceForImageSize:(struct CGSize { double x0; double x1; })a0;
+ (void)drawWatermarkInContext:(struct CGContext { } *)a0 forLayer:(BOOL)a1 renderingContext:(id)a2;
+ (void)drawWatermarkPatternIn:(struct CGContext { } *)a0 layoutSize:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 forLightContent:(BOOL)a3;
+ (void)findWatermarkableAssetsIn:(id)a0 performing:(id /* block */)a1;
+ (void)logTimingConfiguration;
+ (BOOL)needsDarkWatermarkForLightContentWithImage:(struct CGImage { } *)a0;
+ (BOOL)shouldWatermarkMediaWithAssetMetadataProvider:(id)a0 canvas:(id)a1;
+ (BOOL)shouldWatermarkMediaWithAssetMetadataProvider:(id)a0 canvas:(id)a1 isSubscribed:(BOOL)a2;
+ (BOOL)shouldWatermarkMediaWithAssetMetadataProvider:(id)a0 inDocumentWithMetadataProvider:(id)a1;
+ (struct CGImage { } *)watermarkPatternImageAtScale:(double)a0 inBlack:(BOOL)a1;

- (void).cxx_destruct;
- (id)init;

@end
