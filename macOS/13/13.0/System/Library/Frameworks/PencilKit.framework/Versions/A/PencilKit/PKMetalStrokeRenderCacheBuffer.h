@class PKMetalBuffer;
@protocol MTLBuffer;

@interface PKMetalStrokeRenderCacheBuffer : NSObject {
    PKMetalBuffer *_buffer;
}

@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long numVertices;
@property (readonly, nonatomic) id<MTLBuffer> vertexBuffer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1 numVertices:(unsigned long long)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;

@end
