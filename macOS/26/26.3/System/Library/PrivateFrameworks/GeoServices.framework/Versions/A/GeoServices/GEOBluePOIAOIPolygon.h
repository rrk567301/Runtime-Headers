@class NSArray, NSString;

@interface GEOBluePOIAOIPolygon : GEOBluePOIAOIRing <_GEOPolygonBuilder>

@property (readonly, nonatomic) NSArray *holes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)addHole;

@end
