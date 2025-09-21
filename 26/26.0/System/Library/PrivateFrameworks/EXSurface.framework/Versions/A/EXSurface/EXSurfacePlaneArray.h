@class EXSurfacePriv, EXSurfacePlane;

@interface EXSurfacePlaneArray : NSObject {
    EXSurfacePriv *_priv;
    EXSurfacePlane *_planes[4];
}

@property (readonly) unsigned long long count;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEXSurfacePriv:(id)a0;

@end
