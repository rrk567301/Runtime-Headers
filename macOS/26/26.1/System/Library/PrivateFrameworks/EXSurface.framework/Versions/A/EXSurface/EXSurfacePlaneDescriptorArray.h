@class EXSurfaceImageDescriptor;

@interface EXSurfacePlaneDescriptorArray : NSObject {
    EXSurfaceImageDescriptor *_planes[4];
}

@property (readonly) unsigned long long count;

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)init;

@end
