@protocol MTLTexture;

@interface TextureAndClearColor : NSObject

@property (retain, nonatomic) id<MTLTexture> texture;
@property (nonatomic) struct { double red; double green; double blue; double alpha; } clearColor;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;

@end
