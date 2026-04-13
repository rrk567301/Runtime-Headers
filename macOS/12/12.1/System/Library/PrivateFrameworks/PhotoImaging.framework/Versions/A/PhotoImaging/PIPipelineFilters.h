@interface PIPipelineFilters : NSObject

+ (id)autoCropFilter;
+ (id)exifOrientationAndCropStraightenOnly;
+ (id)rawFaceBalanceFilter;
+ (id)rawSourceFilterIncludingOrientation;
+ (id)sourceFilterNoOrientation;
+ (id)sushiLevel1Filter;
+ (id)noRedEyeFilter;
+ (id)noTrimFilter;
+ (id)noMuteFilter;
+ (id)noCropFilter;
+ (id)iosCropToolFilter;
+ (id)stripAllTimeAdjustmentsFilter;
+ (id)noGeometryFilter;
+ (id)noOrientationFilter;
+ (id)orientationAsMetaDataFilter;
+ (id)perspectiveStraightenWithoutCropFilter;
+ (id)preGeometryFilter;
+ (id)postGeometryFilter;
+ (id)inputToCropFilter;
+ (id)histogramOptimizationFilter;
+ (id)stopAtTagIncludeGeometryFilter:(id)a0;
+ (id)stopAtTagIncludeOrientationFilter:(id)a0;
+ (id)applyOrientationFilter;
+ (id)autoloopStabilizedVideoFilter;
+ (id)overcaptureSourceFilter;
+ (id)primarySourceFilter;
+ (id)spatialOvercaptureVideoSourceFilter;
+ (id)oneShotPortraitV2ExportFilter;
+ (id)socPseudoColorFilter;

@end
