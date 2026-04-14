@class EXSurfacePrivImageDesc;

@interface EXSurfacePrivImageDescArray : NSObject {
    EXSurfacePrivImageDesc *_planes[4];
}

@property (nonatomic) unsigned long long count;

- (id)initWithDescriptor:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithPlaneCount:(unsigned long long)a0;

@end
