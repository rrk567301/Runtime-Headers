@class RSOrthographicDetector;

@interface RSDoorWindowOfflineDetector : NSObject {
    RSOrthographicDetector *_doorWindowDetector;
}

- (id)init;
- (void).cxx_destruct;
- (id)runWithPointCloud:(id)a0 floorPlan:(id)a1 lcnnOpenings:(id)a2;
- (void)setBeautificationEnable:(BOOL)a0;

@end
