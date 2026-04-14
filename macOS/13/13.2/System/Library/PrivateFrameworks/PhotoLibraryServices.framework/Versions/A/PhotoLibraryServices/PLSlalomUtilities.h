@interface PLSlalomUtilities : NSObject

+ (id)synchronouslyFetchVideoAdjustmentsFromManagedAsset:(id)a0;
+ (id)videoAVObjectBuilderForManagedAsset:(id)a0 applyVideoAdjustments:(BOOL)a1;
+ (double)durationForManagedAsset:(id)a0 applyVideoAdjustments:(BOOL)a1;
+ (double)durationForBaseDuration:(double)a0 videoAdjustments:(id)a1;

@end
