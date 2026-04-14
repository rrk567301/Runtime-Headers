@class GEOMultiSectionFeature;

@interface GEOBuildingFootprintFeature : NSObject {
    void *_buildingFootprintFeature;
    GEOMultiSectionFeature *_multiSectionFeature;
}

- (void).cxx_destruct;
- (id)init:(void *)a0 withVectorTile:(id)a1;
- (id)feature;
- (void *)get;
- (unsigned long long)extrusionOffset;
- (unsigned long long)baseOffset;
- (BOOL)hasLandmark;
- (BOOL)isForTransit;

@end
