@class NSString;

@interface GEOBluePOIAOIRing : NSObject <_GEOPolygonRingBuilder> {
    unsigned long long _insertIdx;
}

@property (readonly, nonatomic) struct { double x0; double x1; } *points;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPoint:(struct { double x0; double x1; })a0;
- (void)dealloc;
- (id)_pointsDescription;
- (void)setPointCount:(unsigned long long)a0;

@end
