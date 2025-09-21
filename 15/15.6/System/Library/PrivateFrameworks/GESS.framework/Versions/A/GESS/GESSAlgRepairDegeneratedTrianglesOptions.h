@interface GESSAlgRepairDegeneratedTrianglesOptions : NSObject

@property char enableTopologicalChange;
@property float shortEdgesCollapsingRatioThreshold;

- (id)init;

@end
