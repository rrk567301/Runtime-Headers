@protocol MTLBuffer;

@interface ADVisualDepthGeometry : NSObject

@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) long long count;
@property (nonatomic) long long offset;
@property (nonatomic) long long stride;

- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 count:(long long)a1 offset:(long long)a2 stride:(long long)a3;

@end
