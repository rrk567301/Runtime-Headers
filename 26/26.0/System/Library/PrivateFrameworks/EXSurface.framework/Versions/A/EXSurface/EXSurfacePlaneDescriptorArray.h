@class EXSurfaceImageDescriptor;

@interface EXSurfacePlaneDescriptorArray : NSObject {
    EXSurfaceImageDescriptor *_planes[4];
}

@property (readonly) unsigned long long count;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
