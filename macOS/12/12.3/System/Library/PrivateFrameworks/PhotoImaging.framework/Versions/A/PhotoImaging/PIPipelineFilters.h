@interface PIPipelineFilters : NSObject

+ (id)sourceFilterNoOrientation;
+ (id)stopAtTagIncludeOrientationFilter:(id)a0;
+ (id)applyOrientationFilter;
+ (id)rawFaceBalanceFilter;
+ (id)rawSourceFilterIncludingOrientation;
+ (id)sushiLevel1Filter;
+ (id)oneShotPortraitV2ExportFilter;
+ (id)orientationAsMetaDataFilter;
+ (id)noCropFilter;
+ (id)overcaptureSourceFilter;
+ (id)primarySourceFilter;
+ (id)exifOrientationAndCropStraightenOnly;
+ (id)iosCropToolFilter;
+ (id)socPseudoColorFilter;
+ (id)stopAtTagIncludeGeometryFilter:(id)a0;
+ (id)histogramOptimizationFilter;
+ (id)autoCropFilter;
+ (id)noGeometryFilter;
+ (id)inputToCropFilter;
+ (id)noRedEyeFilter;
+ (id)noTrimFilter;
+ (id)noMuteFilter;
+ (id)stripAllTimeAdjustmentsFilter;
+ (id)noOrientationFilter;
+ (id)perspectiveStraightenWithoutCropFilter;
+ (id)preGeometryFilter;
+ (id)postGeometryFilter;
+ (id)autoloopStabilizedVideoFilter;
+ (id)spatialOvercaptureVideoSourceFilter;

@end
