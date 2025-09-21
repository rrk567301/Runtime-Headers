@class GEOComposedGeometryRoutePersistentData;

@interface GEORouteBuilder_PersistentData : GEORouteBuilderBase

@property (retain, nonatomic) GEOComposedGeometryRoutePersistentData *persistentData;

- (void).cxx_destruct;
- (char)_buildComponents;
- (char)_buildCoordinates;
- (id)_newRouteInstance;
- (char)_setMiscInfo;
- (int)_transportType;
- (id)initWithPersistentData:(id)a0;

@end
