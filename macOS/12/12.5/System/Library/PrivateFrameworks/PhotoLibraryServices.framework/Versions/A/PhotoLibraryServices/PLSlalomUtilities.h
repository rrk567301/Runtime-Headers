@interface PLSlalomUtilities : NSObject

+ (id)synchronouslyFetchVideoAdjustmentsFromManagedAsset:(id)a0;
+ (double)durationForBaseDuration:(double)a0 videoAdjustments:(id)a1;
+ (double)durationForManagedAsset:(id)a0 applyVideoAdjustments:(BOOL)a1;
+ (id)videoAVObjectBuilderForManagedAsset:(id)a0 applyVideoAdjustments:(BOOL)a1;

@end
