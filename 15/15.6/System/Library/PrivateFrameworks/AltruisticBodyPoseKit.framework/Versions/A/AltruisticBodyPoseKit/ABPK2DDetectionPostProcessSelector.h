@interface ABPK2DDetectionPostProcessSelector : NSObject

+ (id)get2DDetectionPostProcessWithNetworkConfig:(id)a0 use3DSkeletonForExtrapolation:(char)a1 shouldPush3DSupportSkeleton:(char)a2;
+ (id)get2DDetectionPostProcessWithNetworkConfig:(id)a0 use3DSkeletonForExtrapolation:(char)a1 shouldPush3DSupportSkeleton:(char)a2 withExtrapolationTime:(double)a3;

@end
