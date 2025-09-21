@class GEOMultiSectionFeature;

@interface GEOBuildingFootprintFeature : NSObject {
    void *_buildingFootprintFeature;
    GEOMultiSectionFeature *_multiSectionFeature;
}

- (id)feature;
- (void *)get;
- (id)init:(void *)a0 withVectorTile:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)extrusionOffset;
- (unsigned long long)baseOffset;
- (BOOL)hasLandmark;
- (BOOL)isForTransit;

@end
