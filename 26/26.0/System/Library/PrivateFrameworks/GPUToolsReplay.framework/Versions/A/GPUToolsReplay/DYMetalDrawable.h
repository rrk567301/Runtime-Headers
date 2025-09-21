@protocol MTLTexture;

@interface DYMetalDrawable : NSObject

@property (retain, nonatomic) id<MTLTexture> texture;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;

@end
