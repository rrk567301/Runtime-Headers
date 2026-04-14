@class EXSurfacePrivImageDesc;

@interface EXSurfacePrivImageDescArray : NSObject {
    EXSurfacePrivImageDesc *_planes[4];
}

@property (nonatomic) unsigned long long count;

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithPlaneCount:(unsigned long long)a0;

@end
