@class NSArray, GEOBuildingFootprintFeature;

@interface GEOMapFeatureBuilding : NSObject {
    GEOBuildingFootprintFeature *_feature;
}

@property (readonly, nonatomic) NSArray *sections;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFeature:(id)a0;

@end
