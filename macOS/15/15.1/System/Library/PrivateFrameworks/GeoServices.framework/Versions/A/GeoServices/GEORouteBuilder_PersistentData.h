@class GEOComposedGeometryRoutePersistentData;

@interface GEORouteBuilder_PersistentData : GEORouteBuilderBase

@property (retain, nonatomic) GEOComposedGeometryRoutePersistentData *persistentData;

- (void).cxx_destruct;
- (int)_transportType;
- (BOOL)_buildComponents;
- (BOOL)_buildCoordinates;
- (id)_newRouteInstance;
- (BOOL)_setMiscInfo;
- (id)initWithPersistentData:(id)a0;

@end
